#include <stdint.h>
#include <stdbool.h>
#include "inc/tm4c123gh6pm.h"
#include "inc/hw_memmap.h"
#include "driverlib/gpio.h"
#include "driverlib/interrupt.h"
#include "driverlib/pin_map.h"
#include "driverlib/rom_map.h"
#include "driverlib/sysctl.h"
#include "driverlib/uart.h"
#include "DisplayCommands.h"
#include "GameBoard.h"
#include "WinnerCheck.h"

//#include "driverlib/rom.h"
//#include "driverlib/debug.h"
//#include "driverlib/fpu.h"
//#include "inc/hw_ints.h"

#define MATRIX_ROW 6
#define MATRIX_COL 7


int i, j, k;
int player = 1;
int rowloc = 0;
int colloc = 0;
int location=0;
int occupy = 0;
int winner=0;
int restart=0;


int taken_cells[6][7][2]={{{0, 0},{0, 0},{0, 0},{0, 0},{0, 0},{0, 0}},
																				{{0, 0},{0, 0},{0, 0},{0, 0},{0, 0},{0, 0},{0, 0}},
																				{{0, 0},{0, 0},{0, 0},{0, 0},{0, 0},{0, 0},{0, 0}},
																				{{0, 0},{0, 0},{0, 0},{0, 0},{0, 0},{0, 0},{0, 0}},
																				{{0, 0},{0, 0},{0, 0},{0, 0},{0, 0},{0, 0},{0, 0}},
																				{{0, 0},{0, 0},{0, 0},{0, 0},{0, 0},{0, 0},{0, 0}},
																				};


void PortFunctionInit(void) {

	volatile uint32_t ui32Loop;   
	
  // Enable the clock of the GPIO port that is used for the on-board LED and switch.
  SYSCTL_RCGC2_R = SYSCTL_RCGC2_GPIOF;

  //
  // Do a dummy read to insert a few cycles after enabling the peripheral.
  //
  ui32Loop = SYSCTL_RCGC2_R;

  // Unlock GPIO Port F
	GPIO_PORTF_LOCK_R = 0x4C4F434B;   
	GPIO_PORTF_CR_R |= 0x11;           // allow changes to PF0
	
  GPIO_PORTF_DIR_R &= ~0x11;
	
  // Enable both PF2 and PF0 for digital function.
	GPIO_PORTF_DEN_R |= 0x11;

	//Enable pull-up on PF0
	GPIO_PORTF_PUR_R |= 0x11; 
}


void setBoard(){
	//Have to put stuff on the display in smaller clusters
	//if the function is too large, the display refuses
	//to acknowledge any given commands
	DISPLAY_COMMANDS clearDisplay();
	SysCtlDelay(SysCtlClockGet() / (50 * 3));
	DISPLAY_COMMANDS setDefaultBoard();
	DISPLAY_COMMANDS titleCluster1();
	DISPLAY_COMMANDS titleCluster2();
	DISPLAY_COMMANDS titleCluster3();
	DISPLAY_COMMANDS titleClusterP1();
	DISPLAY_COMMANDS titleClusterP2();
}

void IntGlobalEnable(void){
	__asm(" cpsie i\n");
}

void Interrupt_Init(void)
{
		NVIC_EN0_R |= 0x40000000;         // enable interrupt 30 in NVIC (GPIOF)
    NVIC_PRI7_R &= 0x00E00000;        // configure GPIOF interrupt priority as 0
    GPIO_PORTF_IM_R |= 0x11;          // arm interrupt on PF0 and PF4
    GPIO_PORTF_IS_R &= ~0x11;     		// PF0 and PF4 is edge-sensitive
		GPIO_PORTF_IBE_R |= 0x11;					// PF0 and PF4 are both edges trigger 
		GPIO_PORTF_IEV_R &= ~0x11;  			// PF0 and PF4 are falling edge event
    IntGlobalEnable();                // globally enable interrupt
}


void GPIOPortF_Handler(void){
	
  // acknowledge flag for PF0 and PF4
  GPIO_PORTF_ICR_R |= 0x11;
	
	//if right button is pressed
	if ((GPIO_PORTF_DATA_R&0x01)==0x00){
		if (colloc != 6){
			colloc++;
		}
		else{
			colloc = 0;
		}
	}
	
	//if left button is pressed
	if ((GPIO_PORTF_DATA_R&0x10)==0x00) {
		if (taken_cells[rowloc][colloc][0]==0) {
			rowloc++;
		}
	}
}


int main(void)
{
	//set up interrupt as well as the UART ports
	PortFunctionInit();
	MAP_SysCtlClockSet(SYSCTL_SYSDIV_5 | SYSCTL_USE_OSC | SYSCTL_OSC_MAIN |
                       SYSCTL_XTAL_16MHZ);
	
	Interrupt_Init();
	
	MAP_SysCtlPeripheralEnable(SYSCTL_PERIPH_UART5);
	MAP_SysCtlPeripheralEnable(SYSCTL_PERIPH_GPIOE);
	
	GPIOPinConfigure(GPIO_PE4_U5RX);
  GPIOPinConfigure(GPIO_PE5_U5TX);
  MAP_GPIOPinTypeUART(GPIO_PORTE_BASE, GPIO_PIN_4 | GPIO_PIN_5);
	
	MAP_UARTConfigSetExpClk(UART5_BASE, MAP_SysCtlClockGet(), 115200,
                            (UART_CONFIG_WLEN_8 | UART_CONFIG_STOP_ONE |
                             UART_CONFIG_PAR_NONE));

	//Get the board set up to its default layout
	SysCtlDelay(SysCtlClockGet() / (5 * 3));
	setBoard();
	p1TurnActive();
	
	//Start the game
	do{	//do-while loop to keep playing the game
		do{//do-while loop to play until there is a winner
			GAME_BOARD switchPixel(player, 1, location);
			SysCtlDelay(SysCtlClockGet() / (5 * 3));

			GAME_BOARD switchPixel(player, 0, location);
			SysCtlDelay(SysCtlClockGet() / (5 * 3));
	
			if (winner != 0) {
				//this is how you know someone won
				restart=1;
			}
	
			if (rowloc > 0) {
				if ((taken_cells[rowloc+1][colloc][0]==0) && (rowloc < 5)) {
					rowloc++;
				}
			else {
				GAME_BOARD switchPixel(player, 1, location);
				taken_cells[rowloc][colloc][0] = location;
				taken_cells[rowloc][colloc][1] = player;
				winner = WINNER_CHECK winning_condition(taken_cells, player);
			
				rowloc = 0;
				if (player == 1) {
					DISPLAY_COMMANDS p1TurnDeactive();
					player = 2;
					DISPLAY_COMMANDS p2TurnActive();
				}
				else {
					DISPLAY_COMMANDS p2TurnDeactive();
					player = 1;
					DISPLAY_COMMANDS p1TurnActive();
				}
			}
		}
	
	location = GAME_BOARD getThePixelLocation(rowloc, colloc);
	
	}while (restart==0);

	//If we are here, there is a winner. 
	//Clear the display and print the player that won
	DISPLAY_COMMANDS clearDisplay();
	SysCtlDelay(SysCtlClockGet() / (5 * 3));
	DISPLAY_COMMANDS displayWinner(winner);

	//delay before restarting the game
	for(i=0; i<20;i++){
		SysCtlDelay(SysCtlClockGet() / (5 * 3));
	}
	//reset starting conditions
	restart=0;
	winner=0;
	DISPLAY_COMMANDS clearDisplay();
	setBoard();
	//reset the matrix
	for(i=0;i<MATRIX_ROW;i++){
		for(j=0;j<MATRIX_COL;j++){
			for(k=0;k<1;k++){
				taken_cells[i][j][k]=0;			
			}
		}
	}
}while(1);//loop the game forever


	while(1){
		//loop forever
	}
}//end main



		