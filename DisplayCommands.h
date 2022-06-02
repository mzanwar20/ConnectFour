#ifndef DISPLAY_COMMANDS
#define DISPLAY_COMMANDS

#include <stdint.h>
#include <stdbool.h>
#include "inc/hw_memmap.h"
#include "driverlib/gpio.h"
#include "driverlib/interrupt.h"
#include "driverlib/pin_map.h"
#include "driverlib/rom_map.h"
#include "driverlib/sysctl.h"
#include "driverlib/uart.h"


/*
	Here are most setup commands sent to the display to be printed.
	These functions are called from the main
*/

void clearDisplay(){
	int i=0;
	char clearScreen[]="ATd0=()";
	for(i=0; clearScreen[i]!='\0'; i++){		
				MAP_UARTCharPut(UART5_BASE, clearScreen[i]);	
			}	
			SysCtlDelay(SysCtlClockGet() / (50 * 3));
}

void displayWinner(int player){
	int i=0;
	
	char box[]="AT91=(1,1,62,30,72)";
	char box2[]="AT91=(2,2,61,29,32)";
	char box3[]="AT91=(3,3,60,28,44)";
	char win[]="AT81=(2,3,WINS!)";
	
	
	for(i=0; box[i]!='\0'; i++){		
				MAP_UARTCharPut(UART5_BASE, box[i]);	
			}	
			SysCtlDelay(SysCtlClockGet() / (50 * 3));
			SysCtlDelay(SysCtlClockGet() / (50 * 3));
			for(i=0; box2[i]!='\0'; i++){		
				MAP_UARTCharPut(UART5_BASE, box2[i]);	
			}	
			SysCtlDelay(SysCtlClockGet() / (50 * 3));
			SysCtlDelay(SysCtlClockGet() / (50 * 3));
			for(i=0; box3[i]!='\0'; i++){		
				MAP_UARTCharPut(UART5_BASE, box3[i]);	
			}	
			SysCtlDelay(SysCtlClockGet() / (50 * 3));
			SysCtlDelay(SysCtlClockGet() / (50 * 3));
	
	if(player==1){
		
		char p1[]="AT81=(1,1, Player 1)";
		for(i=0; p1[i]!='\0'; i++){		
				MAP_UARTCharPut(UART5_BASE, p1[i]);	
			}	
			SysCtlDelay(SysCtlClockGet() / (50 * 3));
			SysCtlDelay(SysCtlClockGet() / (50 * 3));
		
	}
	else{
		char p2[]="AT81=(1,1, Player 2)";
		for(i=0; p2[i]!='\0'; i++){		
				MAP_UARTCharPut(UART5_BASE, p2[i]);	
			}	
			SysCtlDelay(SysCtlClockGet() / (50 * 3));
			SysCtlDelay(SysCtlClockGet() / (50 * 3));
	}
	
	
	for(i=0; win[i]!='\0'; i++){		
				MAP_UARTCharPut(UART5_BASE, win[i]);	
			}	
			SysCtlDelay(SysCtlClockGet() / (50 * 3));
			SysCtlDelay(SysCtlClockGet() / (50 * 3));
	

}

void p1TurnActive(){
	int i=0; 
	
	char arrow[]="AT9d=(43,20,1,96)";
	
	for(i=0; arrow[i]!='\0'; i++){		
				MAP_UARTCharPut(UART5_BASE, arrow[i]);	
			}	
			SysCtlDelay(SysCtlClockGet() / (50 * 3));
			SysCtlDelay(SysCtlClockGet() / (50 * 3));

}
void p1TurnDeactive(){
	int i=0; 
	
	char arrow[]="AT9d=(43,20,1,0)";
	
	for(i=0; arrow[i]!='\0'; i++){		
				MAP_UARTCharPut(UART5_BASE, arrow[i]);	
			}	
			SysCtlDelay(SysCtlClockGet() / (50 * 3));
			SysCtlDelay(SysCtlClockGet() / (50 * 3));

}
void p2TurnActive(){
	int i=0; 
	
	char arrow[]="AT9d=(43,26,1,104)";
	
	for(i=0; arrow[i]!='\0'; i++){		
				MAP_UARTCharPut(UART5_BASE, arrow[i]);	
			}	
			SysCtlDelay(SysCtlClockGet() / (50 * 3));
			SysCtlDelay(SysCtlClockGet() / (50 * 3));

}
void p2TurnDeactive(){
	int i=0; 
	
	char arrow[]="AT9d=(43,26,1,0)";
	
	for(i=0; arrow[i]!='\0'; i++){		
				MAP_UARTCharPut(UART5_BASE, arrow[i]);	
			}	
			SysCtlDelay(SysCtlClockGet() / (50 * 3));
			SysCtlDelay(SysCtlClockGet() / (50 * 3));

}

void titleClusterP2(){
	
	int i=0;
	
	//P
	char line11[]="AT90=(48,24,48,28,104)";
	char line12[]="AT90=(48,24,50,24,104)";
	char line13[]="AT90=(50,24,50,26,104)";
	char line14[]="AT90=(48,26,50,26,104)";
	//2
	char line15[]="AT90=(53,24,56,24,104)";
	char line16[]="AT90=(53,27,56,25,104)";
	char line17[]="AT90=(53,28,56,28,104)";
	
			for(i=0; line11[i]!='\0'; i++){		
				MAP_UARTCharPut(UART5_BASE, line11[i]);	
			}	
			SysCtlDelay(SysCtlClockGet() / (50 * 3));
			SysCtlDelay(SysCtlClockGet() / (50 * 3));
			
			for(i=0; line12[i]!='\0'; i++){		
				MAP_UARTCharPut(UART5_BASE, line12[i]);	
			}	
			SysCtlDelay(SysCtlClockGet() / (50 * 3));
			SysCtlDelay(SysCtlClockGet() / (50 * 3));
			
			for(i=0; line13[i]!='\0'; i++){		
				MAP_UARTCharPut(UART5_BASE, line13[i]);	
			}	
			SysCtlDelay(SysCtlClockGet() / (50 * 3));
			SysCtlDelay(SysCtlClockGet() / (50 * 3));
			
			for(i=0; line14[i]!='\0'; i++){		
				MAP_UARTCharPut(UART5_BASE, line14[i]);	
			}	
			SysCtlDelay(SysCtlClockGet() / (50 * 3));
			SysCtlDelay(SysCtlClockGet() / (50 * 3));
			
			for(i=0; line15[i]!='\0'; i++){		
				MAP_UARTCharPut(UART5_BASE, line15[i]);	
			}	
			SysCtlDelay(SysCtlClockGet() / (50 * 3));
			SysCtlDelay(SysCtlClockGet() / (50 * 3));
			
			for(i=0; line16[i]!='\0'; i++){		
				MAP_UARTCharPut(UART5_BASE, line16[i]);	
			}	
			SysCtlDelay(SysCtlClockGet() / (50 * 3));
			SysCtlDelay(SysCtlClockGet() / (50 * 3));
			
			for(i=0; line17[i]!='\0'; i++){		
				MAP_UARTCharPut(UART5_BASE, line17[i]);	
			}	
			SysCtlDelay(SysCtlClockGet() / (50 * 3));
			SysCtlDelay(SysCtlClockGet() / (50 * 3));

}
void titleClusterP1(){
	int i=0;
	//P
	char line4[]="AT90=(48,18,48,22,96)";
	char line5[]="AT90=(48,18,50,18,96)";
	char line6[]="AT90=(48,20,50,20,96)";
	char line7[]="AT90=(50,18,50,20,96)";
	//1
	char line8[]="AT90=(54,18,55,18,96)";
	char line9[]="AT90=(55,18,55,22,96)";
	char line10[]="AT90=(54,22,56,22,96)";
	
	
	
			for(i=0; line4[i]!='\0'; i++){		
				MAP_UARTCharPut(UART5_BASE, line4[i]);	
			}	
			SysCtlDelay(SysCtlClockGet() / (50 * 3));
			SysCtlDelay(SysCtlClockGet() / (50 * 3));
			
			for(i=0; line5[i]!='\0'; i++){		
				MAP_UARTCharPut(UART5_BASE, line5[i]);	
			}	
			SysCtlDelay(SysCtlClockGet() / (50 * 3));
			SysCtlDelay(SysCtlClockGet() / (50 * 3));
			
			for(i=0; line6[i]!='\0'; i++){		
				MAP_UARTCharPut(UART5_BASE, line6[i]);	
			}	
			SysCtlDelay(SysCtlClockGet() / (50 * 3));
			SysCtlDelay(SysCtlClockGet() / (50 * 3));
			
			for(i=0; line7[i]!='\0'; i++){		
				MAP_UARTCharPut(UART5_BASE, line7[i]);	
			}	
			SysCtlDelay(SysCtlClockGet() / (50 * 3));
			SysCtlDelay(SysCtlClockGet() / (50 * 3));
			
			for(i=0; line8[i]!='\0'; i++){		
				MAP_UARTCharPut(UART5_BASE, line8[i]);	
			}	
			SysCtlDelay(SysCtlClockGet() / (50 * 3));
			SysCtlDelay(SysCtlClockGet() / (50 * 3));
			
			for(i=0; line9[i]!='\0'; i++){		
				MAP_UARTCharPut(UART5_BASE, line9[i]);	
			}	
			SysCtlDelay(SysCtlClockGet() / (50 * 3));
			SysCtlDelay(SysCtlClockGet() / (50 * 3));
			
			for(i=0; line10[i]!='\0'; i++){		
				MAP_UARTCharPut(UART5_BASE, line10[i]);	
			}	
			SysCtlDelay(SysCtlClockGet() / (50 * 3));
			SysCtlDelay(SysCtlClockGet() / (50 * 3));
			
}

void titleCluster3(){
	int i=0;
	//4
	char line1[]="AT90=(53,8,58,3,97)";
	char line2[]="AT90=(58,3,58,12,97)";
	char line3[]="AT90=(53,8,59,8,97)";
	//player info rect
	char rect1[]="AT91=(38,16,62,30,72)";

	
			for(i=0; line1[i]!='\0'; i++){		
				MAP_UARTCharPut(UART5_BASE, line1[i]);	
			}	
			SysCtlDelay(SysCtlClockGet() / (50 * 3));
			SysCtlDelay(SysCtlClockGet() / (50 * 3));
			
			for(i=0; line2[i]!='\0'; i++){		
				MAP_UARTCharPut(UART5_BASE, line2[i]);	
			}	
			SysCtlDelay(SysCtlClockGet() / (50 * 3));
			SysCtlDelay(SysCtlClockGet() / (50 * 3));
			
			for(i=0; line3[i]!='\0'; i++){		
				MAP_UARTCharPut(UART5_BASE, line3[i]);	
			}	
			SysCtlDelay(SysCtlClockGet() / (50 * 3));
			SysCtlDelay(SysCtlClockGet() / (50 * 3));
	
			for(i=0; rect1[i]!='\0'; i++){		
				MAP_UARTCharPut(UART5_BASE, rect1[i]);	
			}	
			SysCtlDelay(SysCtlClockGet() / (50 * 3));
			SysCtlDelay(SysCtlClockGet() / (50 * 3));
}

void titleCluster2(){
	int i=0;
	//N
	char line29[]="AT90=(38,9,38,13,100)";
	char line30[]="AT90=(41,9,41,13,100)";
	char line31[]="AT90=(39,10,39,10,100)";
	char line32[]="AT90=(40,11,40,11,100)";
	//E
	char line33[]="AT90=(43,9,45,9,100)";
	char line34[]="AT90=(43,11,44,11,100)";
	char line35[]="AT90=(43,13,45,13,100)";
	char line36[]="AT90=(43,9,43,13,100)";
	//C
	char line37[]="AT90=(47,9,49,9,100)";
	char line38[]="AT90=(47,9,47,13,100)";
	char line39[]="AT90=(47,13,49,13,100)";
	
	
			for(i=0; line29[i]!='\0'; i++){		
				MAP_UARTCharPut(UART5_BASE, line29[i]);	
			}	
			SysCtlDelay(SysCtlClockGet() / (50 * 3));
			SysCtlDelay(SysCtlClockGet() / (50 * 3));
			
			for(i=0; line30[i]!='\0'; i++){		
				MAP_UARTCharPut(UART5_BASE, line30[i]);	
			}	
			SysCtlDelay(SysCtlClockGet() / (50 * 3));
			SysCtlDelay(SysCtlClockGet() / (50 * 3));
			
			for(i=0; line31[i]!='\0'; i++){		
				MAP_UARTCharPut(UART5_BASE, line31[i]);	
			}	
			SysCtlDelay(SysCtlClockGet() / (50 * 3));
			SysCtlDelay(SysCtlClockGet() / (50 * 3));
			
			for(i=0; line32[i]!='\0'; i++){		
				MAP_UARTCharPut(UART5_BASE, line32[i]);	
			}	
			SysCtlDelay(SysCtlClockGet() / (50 * 3));
			SysCtlDelay(SysCtlClockGet() / (50 * 3));
			
			for(i=0; line33[i]!='\0'; i++){		
				MAP_UARTCharPut(UART5_BASE, line33[i]);	
			}	
			SysCtlDelay(SysCtlClockGet() / (50 * 3));
			SysCtlDelay(SysCtlClockGet() / (50 * 3));
			
			for(i=0; line34[i]!='\0'; i++){		
				MAP_UARTCharPut(UART5_BASE, line34[i]);	
			}	
			SysCtlDelay(SysCtlClockGet() / (50 * 3));
			SysCtlDelay(SysCtlClockGet() / (50 * 3));
			
			for(i=0; line35[i]!='\0'; i++){		
				MAP_UARTCharPut(UART5_BASE, line35[i]);	
			}	
			SysCtlDelay(SysCtlClockGet() / (50 * 3));
			SysCtlDelay(SysCtlClockGet() / (50 * 3));
			
			for(i=0; line36[i]!='\0'; i++){		
				MAP_UARTCharPut(UART5_BASE, line36[i]);	
			}	
			SysCtlDelay(SysCtlClockGet() / (50 * 3));
			SysCtlDelay(SysCtlClockGet() / (50 * 3));
			
			for(i=0; line37[i]!='\0'; i++){		
				MAP_UARTCharPut(UART5_BASE, line37[i]);	
			}	
			SysCtlDelay(SysCtlClockGet() / (50 * 3));
			SysCtlDelay(SysCtlClockGet() / (50 * 3));
			
			for(i=0; line38[i]!='\0'; i++){		
				MAP_UARTCharPut(UART5_BASE, line38[i]);	
			}	
			SysCtlDelay(SysCtlClockGet() / (50 * 3));
			SysCtlDelay(SysCtlClockGet() / (50 * 3));
			
			for(i=0; line39[i]!='\0'; i++){		
				MAP_UARTCharPut(UART5_BASE, line39[i]);	
			}	
			SysCtlDelay(SysCtlClockGet() / (50 * 3));
			SysCtlDelay(SysCtlClockGet() / (50 * 3));
	
}

void titleCluster1(){
	
	int i=0;
	
	//T
	char line16[]="AT90=(38,1,62,1,64)";
	char line17[]="AT90=(51,1,51,13,64)";
	//C
	char line18[]="AT90=(38,3,40,3,100)";
	char line19[]="AT90=(38,7,40,7,100)";
	char line20[]="AT90=(38,3,38,7,100)";
	//O
	char line21[]="AT90=(42,3,42,7,100)";
	char line22[]="AT90=(42,3,44,3,100)";
	char line23[]="AT90=(44,3,44,7,100)";
	char line24[]="AT90=(42,7,44,7,100)";
	//N
	char line25[]="AT90=(46,3,46,7,100)";
	char line26[]="AT90=(49,3,49,7,100)";
	char line27[]="AT90=(47,4,47,4,100)";
	char line28[]="AT90=(48,5,48,5,100)";

	
			SysCtlDelay(SysCtlClockGet() / (50 * 3));
	
			for(i=0; line16[i]!='\0'; i++){		
				MAP_UARTCharPut(UART5_BASE, line16[i]);	
			}	
			SysCtlDelay(SysCtlClockGet() / (50 * 3));
			SysCtlDelay(SysCtlClockGet() / (50 * 3));
			
			for(i=0; line17[i]!='\0'; i++){		
				MAP_UARTCharPut(UART5_BASE, line17[i]);	
			}	
			SysCtlDelay(SysCtlClockGet() / (50 * 3));
			SysCtlDelay(SysCtlClockGet() / (50 * 3));
			
			for(i=0; line18[i]!='\0'; i++){		
				MAP_UARTCharPut(UART5_BASE, line18[i]);	
			}	
			SysCtlDelay(SysCtlClockGet() / (50 * 3));
			SysCtlDelay(SysCtlClockGet() / (50 * 3));
			
			for(i=0; line19[i]!='\0'; i++){		
				MAP_UARTCharPut(UART5_BASE, line19[i]);	
			}	
			SysCtlDelay(SysCtlClockGet() / (50 * 3));
			SysCtlDelay(SysCtlClockGet() / (50 * 3));
			
			for(i=0; line20[i]!='\0'; i++){		
				MAP_UARTCharPut(UART5_BASE, line20[i]);	
			}	
			SysCtlDelay(SysCtlClockGet() / (50 * 3));
			SysCtlDelay(SysCtlClockGet() / (50 * 3));
			
			for(i=0; line21[i]!='\0'; i++){		
				MAP_UARTCharPut(UART5_BASE, line21[i]);	
			}	
			SysCtlDelay(SysCtlClockGet() / (50 * 3));
			SysCtlDelay(SysCtlClockGet() / (50 * 3));
			
			for(i=0; line22[i]!='\0'; i++){		
				MAP_UARTCharPut(UART5_BASE, line22[i]);	
			}	
			SysCtlDelay(SysCtlClockGet() / (50 * 3));
			SysCtlDelay(SysCtlClockGet() / (50 * 3));
			
			for(i=0; line23[i]!='\0'; i++){		
				MAP_UARTCharPut(UART5_BASE, line23[i]);	
			}	
			SysCtlDelay(SysCtlClockGet() / (50 * 3));
			SysCtlDelay(SysCtlClockGet() / (50 * 3));
			
			for(i=0; line24[i]!='\0'; i++){		
				MAP_UARTCharPut(UART5_BASE, line24[i]);	
			}	
			SysCtlDelay(SysCtlClockGet() / (50 * 3));
			SysCtlDelay(SysCtlClockGet() / (50 * 3));
			
			for(i=0; line24[i]!='\0'; i++){		
				MAP_UARTCharPut(UART5_BASE, line25[i]);	
			}	
			SysCtlDelay(SysCtlClockGet() / (50 * 3));
			SysCtlDelay(SysCtlClockGet() / (50 * 3));
			
			for(i=0; line26[i]!='\0'; i++){		
				MAP_UARTCharPut(UART5_BASE, line26[i]);	
			}	
			SysCtlDelay(SysCtlClockGet() / (50 * 3));
			SysCtlDelay(SysCtlClockGet() / (50 * 3));
			
			for(i=0; line27[i]!='\0'; i++){		
				MAP_UARTCharPut(UART5_BASE, line27[i]);	
			}	
			SysCtlDelay(SysCtlClockGet() / (50 * 3));
			SysCtlDelay(SysCtlClockGet() / (50 * 3));
			
			for(i=0; line28[i]!='\0'; i++){		
				MAP_UARTCharPut(UART5_BASE, line28[i]);	
			}	
			SysCtlDelay(SysCtlClockGet() / (50 * 3));
			SysCtlDelay(SysCtlClockGet() / (50 * 3));

}




void setDefaultBoard(){
	int i=0;
	//Cols
	char rect1[]="AT91=(1,1,6,30,4)";
	char rect2[]="AT91=(11,1,16,30,4)";
	char rect3[]="AT91=(21,1,26,30,4)";
	char rect4[]="AT91=(31,1,36,30,4)";
	//Rows
	char rect5[]="AT91=(1,1,36,6,4)";
	char rect6[]="AT91=(1,11,36,16,4)";
	char rect7[]="AT91=(1,21,36,26,4)";
	char rect8[]="AT91=(1,26,36,30,4)";
	
	
		for(i=0; rect1[i]!='\0'; i++){		
				MAP_UARTCharPut(UART5_BASE, rect1[i]);	
			}	
			SysCtlDelay(SysCtlClockGet() / (50 * 3));
			SysCtlDelay(SysCtlClockGet() / (50 * 3));
			
			for(i=0; rect2[i]!='\0'; i++){		
				MAP_UARTCharPut(UART5_BASE, rect2[i]);	
			}	
			SysCtlDelay(SysCtlClockGet() / (50 * 3));
			SysCtlDelay(SysCtlClockGet() / (50 * 3));
			
			for(i=0; rect3[i]!='\0'; i++){		
				MAP_UARTCharPut(UART5_BASE, rect3[i]);	
			}	
			SysCtlDelay(SysCtlClockGet() / (50 * 3));
			SysCtlDelay(SysCtlClockGet() / (50 * 3));
			
			for(i=0; rect4[i]!='\0'; i++){		
				MAP_UARTCharPut(UART5_BASE, rect4[i]);	
			}	
			SysCtlDelay(SysCtlClockGet() / (50 * 3));
			SysCtlDelay(SysCtlClockGet() / (50 * 3));
			
			for(i=0; rect5[i]!='\0'; i++){		
				MAP_UARTCharPut(UART5_BASE, rect5[i]);	
			}	
			SysCtlDelay(SysCtlClockGet() / (50 * 3));
			SysCtlDelay(SysCtlClockGet() / (50 * 3));
			
			for(i=0; rect6[i]!='\0'; i++){		
				MAP_UARTCharPut(UART5_BASE, rect6[i]);	
			}	
			SysCtlDelay(SysCtlClockGet() / (50 * 3));
			SysCtlDelay(SysCtlClockGet() / (50 * 3));
			
			for(i=0; rect7[i]!='\0'; i++){		
				MAP_UARTCharPut(UART5_BASE, rect7[i]);	
			}	
			SysCtlDelay(SysCtlClockGet() / (50 * 3));
			SysCtlDelay(SysCtlClockGet() / (50 * 3));
			
			for(i=0; rect8[i]!='\0'; i++){		
				MAP_UARTCharPut(UART5_BASE, rect8[i]);	
			}	
			SysCtlDelay(SysCtlClockGet() / (50 * 3));
			SysCtlDelay(SysCtlClockGet() / (50 * 3));
	

}




#endif /* DISPLAY_COMMANDS */


