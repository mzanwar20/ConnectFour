#ifndef GAME_BOARD
#define GAME_BOARD

#define MATRIX_ROW 6
#define MATRIX_COL 7

#include <stdint.h>
#include <stdbool.h>
#include "inc/hw_memmap.h"
#include "driverlib/gpio.h"
#include "driverlib/interrupt.h"
#include "driverlib/pin_map.h"
#include "driverlib/rom_map.h"
#include "driverlib/sysctl.h"
#include "driverlib/uart.h"


int gameMatrix[MATRIX_ROW][MATRIX_COL]={{33,83,133,183,233,283,333},
																				{38,88,138,188,238,288,338},
																				{313,813,1313,1813,2313,2813,3313},
																				{318,818,1318,1818,2318,2818,3318},
																				{323,823,1323,1823,2323,2823,3323},
																				{328,828,1328,1828,2328,2828,3328},
																				};


																					
int getThePixelLocation(int row, int col){
	
	return gameMatrix[row][col];
}

//pixel 3,3 at [0][0]
void pixe33On(int player){
		int i=0;
	
		if(player==1){
			char box[]="AT93=(3,3,1,96)";
	
			for(i=0; box[i]!='\0'; i++){		
				MAP_UARTCharPut(UART5_BASE, box[i]);	
			}	
			SysCtlDelay(SysCtlClockGet() / (50 * 3));
			SysCtlDelay(SysCtlClockGet() / (50 * 3));
		}
		else{
			char box[]="AT93=(3,3,1,104)";
	
			for(i=0; box[i]!='\0'; i++){		
				MAP_UARTCharPut(UART5_BASE, box[i]);	
			}	
			SysCtlDelay(SysCtlClockGet() / (50 * 3));
			SysCtlDelay(SysCtlClockGet() / (50 * 3));
		}	
}
void pixe33Off(int player){
		int i=0;
	
		if(player==1){
			char box[]="AT93=(3,3,1,0)";
	
			for(i=0; box[i]!='\0'; i++){		
				MAP_UARTCharPut(UART5_BASE, box[i]);	
			}	
			SysCtlDelay(SysCtlClockGet() / (50 * 3));
			SysCtlDelay(SysCtlClockGet() / (50 * 3));
		}
		else{
			char box[]="AT93=(3,3,1,0)";
	
			for(i=0; box[i]!='\0'; i++){		
				MAP_UARTCharPut(UART5_BASE, box[i]);	
			}	
			SysCtlDelay(SysCtlClockGet() / (50 * 3));
			SysCtlDelay(SysCtlClockGet() / (50 * 3));
		}	
}

//pixel 8,3 at [0][1]
void pixe83On(int player){
		int i=0;
	
		if(player==1){
			char box[]="AT93=(8,3,1,96)";
	
			for(i=0; box[i]!='\0'; i++){		
				MAP_UARTCharPut(UART5_BASE, box[i]);	
			}	
			SysCtlDelay(SysCtlClockGet() / (50 * 3));
			SysCtlDelay(SysCtlClockGet() / (50 * 3));
		}
		else{
			char box[]="AT93=(8,3,1,104)";
	
			for(i=0; box[i]!='\0'; i++){		
				MAP_UARTCharPut(UART5_BASE, box[i]);	
			}	
			SysCtlDelay(SysCtlClockGet() / (50 * 3));
			SysCtlDelay(SysCtlClockGet() / (50 * 3));
		}	
}
void pixe83Off(int player){
		int i=0;
	
		if(player==1){
			char box[]="AT93=(8,3,1,0)";
	
			for(i=0; box[i]!='\0'; i++){		
				MAP_UARTCharPut(UART5_BASE, box[i]);	
			}	
			SysCtlDelay(SysCtlClockGet() / (50 * 3));
			SysCtlDelay(SysCtlClockGet() / (50 * 3));
		}
		else{
			char box[]="AT93=(8,3,1,0)";
	
			for(i=0; box[i]!='\0'; i++){		
				MAP_UARTCharPut(UART5_BASE, box[i]);	
			}	
			SysCtlDelay(SysCtlClockGet() / (50 * 3));
			SysCtlDelay(SysCtlClockGet() / (50 * 3));
		}	
}
//pixel 13,3 at [0][2]
void pixel33On(int player){
		int i=0;
	
		if(player==1){
			char box[]="AT93=(13,3,1,96)";
	
			for(i=0; box[i]!='\0'; i++){		
				MAP_UARTCharPut(UART5_BASE, box[i]);	
			}	
			SysCtlDelay(SysCtlClockGet() / (50 * 3));
			SysCtlDelay(SysCtlClockGet() / (50 * 3));
		}
		else{
			char box[]="AT93=(13,3,1,104)";
	
			for(i=0; box[i]!='\0'; i++){		
				MAP_UARTCharPut(UART5_BASE, box[i]);	
			}	
			SysCtlDelay(SysCtlClockGet() / (50 * 3));
			SysCtlDelay(SysCtlClockGet() / (50 * 3));
		}	
}
void pixel33Off(int player){
		int i=0;
	
		if(player==1){
			char box[]="AT93=(13,3,1,0)";
	
			for(i=0; box[i]!='\0'; i++){		
				MAP_UARTCharPut(UART5_BASE, box[i]);	
			}	
			SysCtlDelay(SysCtlClockGet() / (50 * 3));
			SysCtlDelay(SysCtlClockGet() / (50 * 3));
		}
		else{
			char box[]="AT93=(13,3,1,0)";
	
			for(i=0; box[i]!='\0'; i++){		
				MAP_UARTCharPut(UART5_BASE, box[i]);	
			}	
			SysCtlDelay(SysCtlClockGet() / (50 * 3));
			SysCtlDelay(SysCtlClockGet() / (50 * 3));
		}	
}
//pixel 18,3 at [0][3]
void pixel83On(int player){
		int i=0;
	
		if(player==1){
			char box[]="AT93=(18,3,1,96)";
	
			for(i=0; box[i]!='\0'; i++){		
				MAP_UARTCharPut(UART5_BASE, box[i]);	
			}	
			SysCtlDelay(SysCtlClockGet() / (50 * 3));
			SysCtlDelay(SysCtlClockGet() / (50 * 3));
		}
		else{
			char box[]="AT93=(18,3,1,104)";
	
			for(i=0; box[i]!='\0'; i++){		
				MAP_UARTCharPut(UART5_BASE, box[i]);	
			}	
			SysCtlDelay(SysCtlClockGet() / (50 * 3));
			SysCtlDelay(SysCtlClockGet() / (50 * 3));
		}	
}
void pixel83Off(int player){
		int i=0;
	
		if(player==1){
			char box[]="AT93=(18,3,1,0)";
	
			for(i=0; box[i]!='\0'; i++){		
				MAP_UARTCharPut(UART5_BASE, box[i]);	
			}	
			SysCtlDelay(SysCtlClockGet() / (50 * 3));
			SysCtlDelay(SysCtlClockGet() / (50 * 3));
		}
		else{
			char box[]="AT93=(18,3,1,0)";
	
			for(i=0; box[i]!='\0'; i++){		
				MAP_UARTCharPut(UART5_BASE, box[i]);	
			}	
			SysCtlDelay(SysCtlClockGet() / (50 * 3));
			SysCtlDelay(SysCtlClockGet() / (50 * 3));
		}	
}
//pixel 23,3 at [0][4]
void pixe233On(int player){
		int i=0;
	
		if(player==1){
			char box[]="AT93=(23,3,1,96)";
	
			for(i=0; box[i]!='\0'; i++){		
				MAP_UARTCharPut(UART5_BASE, box[i]);	
			}	
			SysCtlDelay(SysCtlClockGet() / (50 * 3));
			SysCtlDelay(SysCtlClockGet() / (50 * 3));
		}
		else{
			char box[]="AT93=(23,3,1,104)";
	
			for(i=0; box[i]!='\0'; i++){		
				MAP_UARTCharPut(UART5_BASE, box[i]);	
			}	
			SysCtlDelay(SysCtlClockGet() / (50 * 3));
			SysCtlDelay(SysCtlClockGet() / (50 * 3));
		}	
}
void pixe233Off(int player){
		int i=0;
	
		if(player==1){
			char box[]="AT93=(23,3,1,0)";
	
			for(i=0; box[i]!='\0'; i++){		
				MAP_UARTCharPut(UART5_BASE, box[i]);	
			}	
			SysCtlDelay(SysCtlClockGet() / (50 * 3));
			SysCtlDelay(SysCtlClockGet() / (50 * 3));
		}
		else{
			char box[]="AT93=(23,3,1,0)";
	
			for(i=0; box[i]!='\0'; i++){		
				MAP_UARTCharPut(UART5_BASE, box[i]);	
			}	
			SysCtlDelay(SysCtlClockGet() / (50 * 3));
			SysCtlDelay(SysCtlClockGet() / (50 * 3));
		}	
}

//pixel 28,3 at [0][5]
void pixe283On(int player){
		int i=0;
	
		if(player==1){
			char box[]="AT93=(28,3,1,96)";
	
			for(i=0; box[i]!='\0'; i++){		
				MAP_UARTCharPut(UART5_BASE, box[i]);	
			}	
			SysCtlDelay(SysCtlClockGet() / (50 * 3));
			SysCtlDelay(SysCtlClockGet() / (50 * 3));
		}
		else{
			char box[]="AT93=(28,3,1,104)";
	
			for(i=0; box[i]!='\0'; i++){		
				MAP_UARTCharPut(UART5_BASE, box[i]);	
			}	
			SysCtlDelay(SysCtlClockGet() / (50 * 3));
			SysCtlDelay(SysCtlClockGet() / (50 * 3));
		}	
}
void pixe283Off(int player){
		int i=0;
	
		if(player==1){
			char box[]="AT93=(28,3,1,0)";
	
			for(i=0; box[i]!='\0'; i++){		
				MAP_UARTCharPut(UART5_BASE, box[i]);	
			}	
			SysCtlDelay(SysCtlClockGet() / (50 * 3));
			SysCtlDelay(SysCtlClockGet() / (50 * 3));
		}
		else{
			char box[]="AT93=(28,3,1,0)";
	
			for(i=0; box[i]!='\0'; i++){		
				MAP_UARTCharPut(UART5_BASE, box[i]);	
			}	
			SysCtlDelay(SysCtlClockGet() / (50 * 3));
			SysCtlDelay(SysCtlClockGet() / (50 * 3));
		}	
}

//pixel 33,3 at [0][6]
void pixe333On(int player){
		int i=0;
	
		if(player==1){
			char box[]="AT93=(33,3,1,96)";
	
			for(i=0; box[i]!='\0'; i++){		
				MAP_UARTCharPut(UART5_BASE, box[i]);	
			}	
			SysCtlDelay(SysCtlClockGet() / (50 * 3));
			SysCtlDelay(SysCtlClockGet() / (50 * 3));
		}
		else{
			char box[]="AT93=(33,3,1,104)";
	
			for(i=0; box[i]!='\0'; i++){		
				MAP_UARTCharPut(UART5_BASE, box[i]);	
			}	
			SysCtlDelay(SysCtlClockGet() / (50 * 3));
			SysCtlDelay(SysCtlClockGet() / (50 * 3));
		}	
}
void pixe333Off(int player){
		int i=0;
	
		if(player==1){
			char box[]="AT93=(33,3,1,0)";
	
			for(i=0; box[i]!='\0'; i++){		
				MAP_UARTCharPut(UART5_BASE, box[i]);	
			}	
			SysCtlDelay(SysCtlClockGet() / (50 * 3));
			SysCtlDelay(SysCtlClockGet() / (50 * 3));
		}
		else{
			char box[]="AT93=(33,3,1,0)";
	
			for(i=0; box[i]!='\0'; i++){		
				MAP_UARTCharPut(UART5_BASE, box[i]);	
			}	
			SysCtlDelay(SysCtlClockGet() / (50 * 3));
			SysCtlDelay(SysCtlClockGet() / (50 * 3));
		}	
}

//pixel 3,8 at [1][0]
void pixe38On(int player){
		int i=0;
	
		if(player==1){
			char box[]="AT93=(3,8,1,96)";
	
			for(i=0; box[i]!='\0'; i++){		
				MAP_UARTCharPut(UART5_BASE, box[i]);	
			}	
			SysCtlDelay(SysCtlClockGet() / (50 * 3));
			SysCtlDelay(SysCtlClockGet() / (50 * 3));
		}
		else{
			char box[]="AT93=(3,8,1,104)";
	
			for(i=0; box[i]!='\0'; i++){		
				MAP_UARTCharPut(UART5_BASE, box[i]);	
			}	
			SysCtlDelay(SysCtlClockGet() / (50 * 3));
			SysCtlDelay(SysCtlClockGet() / (50 * 3));
		}	
}
void pixe38Off(int player){
		int i=0;
	
		if(player==1){
			char box[]="AT93=(3,8,1,0)";
	
			for(i=0; box[i]!='\0'; i++){		
				MAP_UARTCharPut(UART5_BASE, box[i]);	
			}	
			SysCtlDelay(SysCtlClockGet() / (50 * 3));
			SysCtlDelay(SysCtlClockGet() / (50 * 3));
		}
		else{
			char box[]="AT93=(3,8,1,0)";
	
			for(i=0; box[i]!='\0'; i++){		
				MAP_UARTCharPut(UART5_BASE, box[i]);	
			}	
			SysCtlDelay(SysCtlClockGet() / (50 * 3));
			SysCtlDelay(SysCtlClockGet() / (50 * 3));
		}	
}

//pixel 8,8 at [1][1]
void pixe88On(int player){
		int i=0;
	
		if(player==1){
			char box[]="AT93=(8,8,1,96)";
	
			for(i=0; box[i]!='\0'; i++){		
				MAP_UARTCharPut(UART5_BASE, box[i]);	
			}	
			SysCtlDelay(SysCtlClockGet() / (50 * 3));
			SysCtlDelay(SysCtlClockGet() / (50 * 3));
		}
		else{
			char box[]="AT93=(8,8,1,104)";
	
			for(i=0; box[i]!='\0'; i++){		
				MAP_UARTCharPut(UART5_BASE, box[i]);	
			}	
			SysCtlDelay(SysCtlClockGet() / (50 * 3));
			SysCtlDelay(SysCtlClockGet() / (50 * 3));
		}	
}
void pixe88Off(int player){
		int i=0;
	
		if(player==1){
			char box[]="AT93=(8,8,1,0)";
	
			for(i=0; box[i]!='\0'; i++){		
				MAP_UARTCharPut(UART5_BASE, box[i]);	
			}	
			SysCtlDelay(SysCtlClockGet() / (50 * 3));
			SysCtlDelay(SysCtlClockGet() / (50 * 3));
		}
		else{
			char box[]="AT93=(8,8,1,0)";
	
			for(i=0; box[i]!='\0'; i++){		
				MAP_UARTCharPut(UART5_BASE, box[i]);	
			}	
			SysCtlDelay(SysCtlClockGet() / (50 * 3));
			SysCtlDelay(SysCtlClockGet() / (50 * 3));
		}	
}
//pixel 13,8 at [1][2]
void pixel38On(int player){
		int i=0;
	
		if(player==1){
			char box[]="AT93=(13,8,1,96)";
	
			for(i=0; box[i]!='\0'; i++){		
				MAP_UARTCharPut(UART5_BASE, box[i]);	
			}	
			SysCtlDelay(SysCtlClockGet() / (50 * 3));
			SysCtlDelay(SysCtlClockGet() / (50 * 3));
		}
		else{
			char box[]="AT93=(13,8,1,104)";
	
			for(i=0; box[i]!='\0'; i++){		
				MAP_UARTCharPut(UART5_BASE, box[i]);	
			}	
			SysCtlDelay(SysCtlClockGet() / (50 * 3));
			SysCtlDelay(SysCtlClockGet() / (50 * 3));
		}	
}
void pixel38Off(int player){
		int i=0;
	
		if(player==1){
			char box[]="AT93=(13,8,1,0)";
	
			for(i=0; box[i]!='\0'; i++){		
				MAP_UARTCharPut(UART5_BASE, box[i]);	
			}	
			SysCtlDelay(SysCtlClockGet() / (50 * 3));
			SysCtlDelay(SysCtlClockGet() / (50 * 3));
		}
		else{
			char box[]="AT93=(13,8,1,0)";
	
			for(i=0; box[i]!='\0'; i++){		
				MAP_UARTCharPut(UART5_BASE, box[i]);	
			}	
			SysCtlDelay(SysCtlClockGet() / (50 * 3));
			SysCtlDelay(SysCtlClockGet() / (50 * 3));
		}	
}
//pixel 18,8 at [1][3]
void pixel88On(int player){
		int i=0;
	
		if(player==1){
			char box[]="AT93=(18,8,1,96)";
	
			for(i=0; box[i]!='\0'; i++){		
				MAP_UARTCharPut(UART5_BASE, box[i]);	
			}	
			SysCtlDelay(SysCtlClockGet() / (50 * 3));
			SysCtlDelay(SysCtlClockGet() / (50 * 3));
		}
		else{
			char box[]="AT93=(18,8,1,104)";
	
			for(i=0; box[i]!='\0'; i++){		
				MAP_UARTCharPut(UART5_BASE, box[i]);	
			}	
			SysCtlDelay(SysCtlClockGet() / (50 * 3));
			SysCtlDelay(SysCtlClockGet() / (50 * 3));
		}	
}
void pixel88Off(int player){
		int i=0;
	
		if(player==1){
			char box[]="AT93=(18,8,1,0)";
	
			for(i=0; box[i]!='\0'; i++){		
				MAP_UARTCharPut(UART5_BASE, box[i]);	
			}	
			SysCtlDelay(SysCtlClockGet() / (50 * 3));
			SysCtlDelay(SysCtlClockGet() / (50 * 3));
		}
		else{
			char box[]="AT93=(18,8,1,0)";
	
			for(i=0; box[i]!='\0'; i++){		
				MAP_UARTCharPut(UART5_BASE, box[i]);	
			}	
			SysCtlDelay(SysCtlClockGet() / (50 * 3));
			SysCtlDelay(SysCtlClockGet() / (50 * 3));
		}	
}
//pixel 23,8 at [1][4]
void pixe238On(int player){
		int i=0;
	
		if(player==1){
			char box[]="AT93=(23,8,1,96)";
	
			for(i=0; box[i]!='\0'; i++){		
				MAP_UARTCharPut(UART5_BASE, box[i]);	
			}	
			SysCtlDelay(SysCtlClockGet() / (50 * 3));
			SysCtlDelay(SysCtlClockGet() / (50 * 3));
		}
		else{
			char box[]="AT93=(23,8,1,104)";
	
			for(i=0; box[i]!='\0'; i++){		
				MAP_UARTCharPut(UART5_BASE, box[i]);	
			}	
			SysCtlDelay(SysCtlClockGet() / (50 * 3));
			SysCtlDelay(SysCtlClockGet() / (50 * 3));
		}	
}
void pixe238Off(int player){
		int i=0;
	
		if(player==1){
			char box[]="AT93=(23,8,1,0)";
	
			for(i=0; box[i]!='\0'; i++){		
				MAP_UARTCharPut(UART5_BASE, box[i]);	
			}	
			SysCtlDelay(SysCtlClockGet() / (50 * 3));
			SysCtlDelay(SysCtlClockGet() / (50 * 3));
		}
		else{
			char box[]="AT93=(23,8,1,0)";
	
			for(i=0; box[i]!='\0'; i++){		
				MAP_UARTCharPut(UART5_BASE, box[i]);	
			}	
			SysCtlDelay(SysCtlClockGet() / (50 * 3));
			SysCtlDelay(SysCtlClockGet() / (50 * 3));
		}	
}

//pixel 28,8 at [1][5]
void pixe288On(int player){
		int i=0;
	
		if(player==1){
			char box[]="AT93=(28,8,1,96)";
	
			for(i=0; box[i]!='\0'; i++){		
				MAP_UARTCharPut(UART5_BASE, box[i]);	
			}	
			SysCtlDelay(SysCtlClockGet() / (50 * 3));
			SysCtlDelay(SysCtlClockGet() / (50 * 3));
		}
		else{
			char box[]="AT93=(28,8,1,104)";
	
			for(i=0; box[i]!='\0'; i++){		
				MAP_UARTCharPut(UART5_BASE, box[i]);	
			}	
			SysCtlDelay(SysCtlClockGet() / (50 * 3));
			SysCtlDelay(SysCtlClockGet() / (50 * 3));
		}	
}
void pixe288Off(int player){
		int i=0;
	
		if(player==1){
			char box[]="AT93=(28,8,1,0)";
	
			for(i=0; box[i]!='\0'; i++){		
				MAP_UARTCharPut(UART5_BASE, box[i]);	
			}	
			SysCtlDelay(SysCtlClockGet() / (50 * 3));
			SysCtlDelay(SysCtlClockGet() / (50 * 3));
		}
		else{
			char box[]="AT93=(28,8,1,0)";
	
			for(i=0; box[i]!='\0'; i++){		
				MAP_UARTCharPut(UART5_BASE, box[i]);	
			}	
			SysCtlDelay(SysCtlClockGet() / (50 * 3));
			SysCtlDelay(SysCtlClockGet() / (50 * 3));
		}	
}

//pixel 33,8 at [1][6]
void pixe338On(int player){
		int i=0;
	
		if(player==1){
			char box[]="AT93=(33,8,1,96)";
	
			for(i=0; box[i]!='\0'; i++){		
				MAP_UARTCharPut(UART5_BASE, box[i]);	
			}	
			SysCtlDelay(SysCtlClockGet() / (50 * 3));
			SysCtlDelay(SysCtlClockGet() / (50 * 3));
		}
		else{
			char box[]="AT93=(33,8,1,104)";
	
			for(i=0; box[i]!='\0'; i++){		
				MAP_UARTCharPut(UART5_BASE, box[i]);	
			}	
			SysCtlDelay(SysCtlClockGet() / (50 * 3));
			SysCtlDelay(SysCtlClockGet() / (50 * 3));
		}	
}
void pixe338Off(int player){
		int i=0;
	
		if(player==1){
			char box[]="AT93=(33,8,1,0)";
	
			for(i=0; box[i]!='\0'; i++){		
				MAP_UARTCharPut(UART5_BASE, box[i]);	
			}	
			SysCtlDelay(SysCtlClockGet() / (50 * 3));
			SysCtlDelay(SysCtlClockGet() / (50 * 3));
		}
		else{
			char box[]="AT93=(33,8,1,0)";
	
			for(i=0; box[i]!='\0'; i++){		
				MAP_UARTCharPut(UART5_BASE, box[i]);	
			}	
			SysCtlDelay(SysCtlClockGet() / (50 * 3));
			SysCtlDelay(SysCtlClockGet() / (50 * 3));
		}	
}

//pixel 3,13 at [2][0]
void pixe313On(int player){
		int i=0;
	
		if(player==1){
			char box[]="AT93=(3,13,1,96)";
	
			for(i=0; box[i]!='\0'; i++){		
				MAP_UARTCharPut(UART5_BASE, box[i]);	
			}	
			SysCtlDelay(SysCtlClockGet() / (50 * 3));
			SysCtlDelay(SysCtlClockGet() / (50 * 3));
		}
		else{
			char box[]="AT93=(3,13,1,104)";
	
			for(i=0; box[i]!='\0'; i++){		
				MAP_UARTCharPut(UART5_BASE, box[i]);	
			}	
			SysCtlDelay(SysCtlClockGet() / (50 * 3));
			SysCtlDelay(SysCtlClockGet() / (50 * 3));
		}	
}
void pixe313Off(int player){
		int i=0;
	
		if(player==1){
			char box[]="AT93=(3,13,1,0)";
	
			for(i=0; box[i]!='\0'; i++){		
				MAP_UARTCharPut(UART5_BASE, box[i]);	
			}	
			SysCtlDelay(SysCtlClockGet() / (50 * 3));
			SysCtlDelay(SysCtlClockGet() / (50 * 3));
		}
		else{
			char box[]="AT93=(3,13,1,0)";
	
			for(i=0; box[i]!='\0'; i++){		
				MAP_UARTCharPut(UART5_BASE, box[i]);	
			}	
			SysCtlDelay(SysCtlClockGet() / (50 * 3));
			SysCtlDelay(SysCtlClockGet() / (50 * 3));
		}	
}

//pixel 8,13 at [2][1]
void pixe813On(int player){
		int i=0;
	
		if(player==1){
			char box[]="AT93=(8,13,1,96)";
	
			for(i=0; box[i]!='\0'; i++){		
				MAP_UARTCharPut(UART5_BASE, box[i]);	
			}	
			SysCtlDelay(SysCtlClockGet() / (50 * 3));
			SysCtlDelay(SysCtlClockGet() / (50 * 3));
		}
		else{
			char box[]="AT93=(8,13,1,104)";
	
			for(i=0; box[i]!='\0'; i++){		
				MAP_UARTCharPut(UART5_BASE, box[i]);	
			}	
			SysCtlDelay(SysCtlClockGet() / (50 * 3));
			SysCtlDelay(SysCtlClockGet() / (50 * 3));
		}	
}
void pixe813Off(int player){
		int i=0;
	
		if(player==1){
			char box[]="AT93=(8,13,1,0)";
	
			for(i=0; box[i]!='\0'; i++){		
				MAP_UARTCharPut(UART5_BASE, box[i]);	
			}	
			SysCtlDelay(SysCtlClockGet() / (50 * 3));
			SysCtlDelay(SysCtlClockGet() / (50 * 3));
		}
		else{
			char box[]="AT93=(8,13,1,0)";
	
			for(i=0; box[i]!='\0'; i++){		
				MAP_UARTCharPut(UART5_BASE, box[i]);	
			}	
			SysCtlDelay(SysCtlClockGet() / (50 * 3));
			SysCtlDelay(SysCtlClockGet() / (50 * 3));
		}	
}
//pixel 13,13 at [2][2]
void pixel313On(int player){
		int i=0;
	
		if(player==1){
			char box[]="AT93=(13,13,1,96)";
	
			for(i=0; box[i]!='\0'; i++){		
				MAP_UARTCharPut(UART5_BASE, box[i]);	
			}	
			SysCtlDelay(SysCtlClockGet() / (50 * 3));
			SysCtlDelay(SysCtlClockGet() / (50 * 3));
		}
		else{
			char box[]="AT93=(13,13,1,104)";
	
			for(i=0; box[i]!='\0'; i++){		
				MAP_UARTCharPut(UART5_BASE, box[i]);	
			}	
			SysCtlDelay(SysCtlClockGet() / (50 * 3));
			SysCtlDelay(SysCtlClockGet() / (50 * 3));
		}	
}
void pixel313Off(int player){
		int i=0;
	
		if(player==1){
			char box[]="AT93=(13,13,1,0)";
	
			for(i=0; box[i]!='\0'; i++){		
				MAP_UARTCharPut(UART5_BASE, box[i]);	
			}	
			SysCtlDelay(SysCtlClockGet() / (50 * 3));
			SysCtlDelay(SysCtlClockGet() / (50 * 3));
		}
		else{
			char box[]="AT93=(13,13,1,0)";
	
			for(i=0; box[i]!='\0'; i++){		
				MAP_UARTCharPut(UART5_BASE, box[i]);	
			}	
			SysCtlDelay(SysCtlClockGet() / (50 * 3));
			SysCtlDelay(SysCtlClockGet() / (50 * 3));
		}	
}
//pixel 18,13 at [2][3]
void pixel813On(int player){
		int i=0;
	
		if(player==1){
			char box[]="AT93=(18,13,1,96)";
	
			for(i=0; box[i]!='\0'; i++){		
				MAP_UARTCharPut(UART5_BASE, box[i]);	
			}	
			SysCtlDelay(SysCtlClockGet() / (50 * 3));
			SysCtlDelay(SysCtlClockGet() / (50 * 3));
		}
		else{
			char box[]="AT93=(18,13,1,104)";
	
			for(i=0; box[i]!='\0'; i++){		
				MAP_UARTCharPut(UART5_BASE, box[i]);	
			}	
			SysCtlDelay(SysCtlClockGet() / (50 * 3));
			SysCtlDelay(SysCtlClockGet() / (50 * 3));
		}	
}
void pixel813Off(int player){
		int i=0;
	
		if(player==1){
			char box[]="AT93=(18,13,1,0)";
	
			for(i=0; box[i]!='\0'; i++){		
				MAP_UARTCharPut(UART5_BASE, box[i]);	
			}	
			SysCtlDelay(SysCtlClockGet() / (50 * 3));
			SysCtlDelay(SysCtlClockGet() / (50 * 3));
		}
		else{
			char box[]="AT93=(18,13,1,0)";
	
			for(i=0; box[i]!='\0'; i++){		
				MAP_UARTCharPut(UART5_BASE, box[i]);	
			}	
			SysCtlDelay(SysCtlClockGet() / (50 * 3));
			SysCtlDelay(SysCtlClockGet() / (50 * 3));
		}	
}
//pixel 23,13 at [2][4]
void pixe2313On(int player){
		int i=0;
	
		if(player==1){
			char box[]="AT93=(23,13,1,96)";
	
			for(i=0; box[i]!='\0'; i++){		
				MAP_UARTCharPut(UART5_BASE, box[i]);	
			}	
			SysCtlDelay(SysCtlClockGet() / (50 * 3));
			SysCtlDelay(SysCtlClockGet() / (50 * 3));
		}
		else{
			char box[]="AT93=(23,13,1,104)";
	
			for(i=0; box[i]!='\0'; i++){		
				MAP_UARTCharPut(UART5_BASE, box[i]);	
			}	
			SysCtlDelay(SysCtlClockGet() / (50 * 3));
			SysCtlDelay(SysCtlClockGet() / (50 * 3));
		}	
}
void pixe2313Off(int player){
		int i=0;
	
		if(player==1){
			char box[]="AT93=(23,13,1,0)";
	
			for(i=0; box[i]!='\0'; i++){		
				MAP_UARTCharPut(UART5_BASE, box[i]);	
			}	
			SysCtlDelay(SysCtlClockGet() / (50 * 3));
			SysCtlDelay(SysCtlClockGet() / (50 * 3));
		}
		else{
			char box[]="AT93=(23,13,1,0)";
	
			for(i=0; box[i]!='\0'; i++){		
				MAP_UARTCharPut(UART5_BASE, box[i]);	
			}	
			SysCtlDelay(SysCtlClockGet() / (50 * 3));
			SysCtlDelay(SysCtlClockGet() / (50 * 3));
		}	
}

//pixel 28,13 at [2][5]
void pixe2813On(int player){
		int i=0;
	
		if(player==1){
			char box[]="AT93=(28,13,1,96)";
	
			for(i=0; box[i]!='\0'; i++){		
				MAP_UARTCharPut(UART5_BASE, box[i]);	
			}	
			SysCtlDelay(SysCtlClockGet() / (50 * 3));
			SysCtlDelay(SysCtlClockGet() / (50 * 3));
		}
		else{
			char box[]="AT93=(28,13,1,104)";
	
			for(i=0; box[i]!='\0'; i++){		
				MAP_UARTCharPut(UART5_BASE, box[i]);	
			}	
			SysCtlDelay(SysCtlClockGet() / (50 * 3));
			SysCtlDelay(SysCtlClockGet() / (50 * 3));
		}	
}
void pixe2813Off(int player){
		int i=0;
	
		if(player==1){
			char box[]="AT93=(28,13,1,0)";
	
			for(i=0; box[i]!='\0'; i++){		
				MAP_UARTCharPut(UART5_BASE, box[i]);	
			}	
			SysCtlDelay(SysCtlClockGet() / (50 * 3));
			SysCtlDelay(SysCtlClockGet() / (50 * 3));
		}
		else{
			char box[]="AT93=(28,13,1,0)";
	
			for(i=0; box[i]!='\0'; i++){		
				MAP_UARTCharPut(UART5_BASE, box[i]);	
			}	
			SysCtlDelay(SysCtlClockGet() / (50 * 3));
			SysCtlDelay(SysCtlClockGet() / (50 * 3));
		}	
}

//pixel 33,13 at [2][6]
void pixe3313On(int player){
		int i=0;
	
		if(player==1){
			char box[]="AT93=(33,13,1,96)";
	
			for(i=0; box[i]!='\0'; i++){		
				MAP_UARTCharPut(UART5_BASE, box[i]);	
			}	
			SysCtlDelay(SysCtlClockGet() / (50 * 3));
			SysCtlDelay(SysCtlClockGet() / (50 * 3));
		}
		else{
			char box[]="AT93=(33,13,1,104)";
	
			for(i=0; box[i]!='\0'; i++){		
				MAP_UARTCharPut(UART5_BASE, box[i]);	
			}	
			SysCtlDelay(SysCtlClockGet() / (50 * 3));
			SysCtlDelay(SysCtlClockGet() / (50 * 3));
		}	
}
void pixe3313Off(int player){
		int i=0;
	
		if(player==1){
			char box[]="AT93=(33,13,1,0)";
	
			for(i=0; box[i]!='\0'; i++){		
				MAP_UARTCharPut(UART5_BASE, box[i]);	
			}	
			SysCtlDelay(SysCtlClockGet() / (50 * 3));
			SysCtlDelay(SysCtlClockGet() / (50 * 3));
		}
		else{
			char box[]="AT93=(33,13,1,0)";
	
			for(i=0; box[i]!='\0'; i++){		
				MAP_UARTCharPut(UART5_BASE, box[i]);	
			}	
			SysCtlDelay(SysCtlClockGet() / (50 * 3));
			SysCtlDelay(SysCtlClockGet() / (50 * 3));
		}	
}

//pixel 3,18 at [3][0]
void pixe318On(int player){
		int i=0;
	
		if(player==1){
			char box[]="AT93=(3,18,1,96)";
	
			for(i=0; box[i]!='\0'; i++){		
				MAP_UARTCharPut(UART5_BASE, box[i]);	
			}	
			SysCtlDelay(SysCtlClockGet() / (50 * 3));
			SysCtlDelay(SysCtlClockGet() / (50 * 3));
		}
		else{
			char box[]="AT93=(3,18,1,104)";
	
			for(i=0; box[i]!='\0'; i++){		
				MAP_UARTCharPut(UART5_BASE, box[i]);	
			}	
			SysCtlDelay(SysCtlClockGet() / (50 * 3));
			SysCtlDelay(SysCtlClockGet() / (50 * 3));
		}	
}
void pixe318Off(int player){
		int i=0;
	
		if(player==1){
			char box[]="AT93=(3,18,1,0)";
	
			for(i=0; box[i]!='\0'; i++){		
				MAP_UARTCharPut(UART5_BASE, box[i]);	
			}	
			SysCtlDelay(SysCtlClockGet() / (50 * 3));
			SysCtlDelay(SysCtlClockGet() / (50 * 3));
		}
		else{
			char box[]="AT93=(3,18,1,0)";
	
			for(i=0; box[i]!='\0'; i++){		
				MAP_UARTCharPut(UART5_BASE, box[i]);	
			}	
			SysCtlDelay(SysCtlClockGet() / (50 * 3));
			SysCtlDelay(SysCtlClockGet() / (50 * 3));
		}	
}

//pixel 8,18 at [3][1]
void pixe818On(int player){
		int i=0;
	
		if(player==1){
			char box[]="AT93=(8,18,1,96)";
	
			for(i=0; box[i]!='\0'; i++){		
				MAP_UARTCharPut(UART5_BASE, box[i]);	
			}	
			SysCtlDelay(SysCtlClockGet() / (50 * 3));
			SysCtlDelay(SysCtlClockGet() / (50 * 3));
		}
		else{
			char box[]="AT93=(8,18,1,104)";
	
			for(i=0; box[i]!='\0'; i++){		
				MAP_UARTCharPut(UART5_BASE, box[i]);	
			}	
			SysCtlDelay(SysCtlClockGet() / (50 * 3));
			SysCtlDelay(SysCtlClockGet() / (50 * 3));
		}	
}
void pixe818Off(int player){
		int i=0;
	
		if(player==1){
			char box[]="AT93=(8,18,1,0)";
	
			for(i=0; box[i]!='\0'; i++){		
				MAP_UARTCharPut(UART5_BASE, box[i]);	
			}	
			SysCtlDelay(SysCtlClockGet() / (50 * 3));
			SysCtlDelay(SysCtlClockGet() / (50 * 3));
		}
		else{
			char box[]="AT93=(8,18,1,0)";
	
			for(i=0; box[i]!='\0'; i++){		
				MAP_UARTCharPut(UART5_BASE, box[i]);	
			}	
			SysCtlDelay(SysCtlClockGet() / (50 * 3));
			SysCtlDelay(SysCtlClockGet() / (50 * 3));
		}	
}
//pixel 13,18 at [3][2]
void pixel318On(int player){
		int i=0;
	
		if(player==1){
			char box[]="AT93=(13,18,1,96)";
	
			for(i=0; box[i]!='\0'; i++){		
				MAP_UARTCharPut(UART5_BASE, box[i]);	
			}	
			SysCtlDelay(SysCtlClockGet() / (50 * 3));
			SysCtlDelay(SysCtlClockGet() / (50 * 3));
		}
		else{
			char box[]="AT93=(13,18,1,104)";
	
			for(i=0; box[i]!='\0'; i++){		
				MAP_UARTCharPut(UART5_BASE, box[i]);	
			}	
			SysCtlDelay(SysCtlClockGet() / (50 * 3));
			SysCtlDelay(SysCtlClockGet() / (50 * 3));
		}	
}
void pixel318Off(int player){
		int i=0;
	
		if(player==1){
			char box[]="AT93=(13,18,1,0)";
	
			for(i=0; box[i]!='\0'; i++){		
				MAP_UARTCharPut(UART5_BASE, box[i]);	
			}	
			SysCtlDelay(SysCtlClockGet() / (50 * 3));
			SysCtlDelay(SysCtlClockGet() / (50 * 3));
		}
		else{
			char box[]="AT93=(13,18,1,0)";
	
			for(i=0; box[i]!='\0'; i++){		
				MAP_UARTCharPut(UART5_BASE, box[i]);	
			}	
			SysCtlDelay(SysCtlClockGet() / (50 * 3));
			SysCtlDelay(SysCtlClockGet() / (50 * 3));
		}	
}
//pixel 18,18 at [3][3]
void pixel818On(int player){
		int i=0;
	
		if(player==1){
			char box[]="AT93=(18,18,1,96)";
	
			for(i=0; box[i]!='\0'; i++){		
				MAP_UARTCharPut(UART5_BASE, box[i]);	
			}	
			SysCtlDelay(SysCtlClockGet() / (50 * 3));
			SysCtlDelay(SysCtlClockGet() / (50 * 3));
		}
		else{
			char box[]="AT93=(18,18,1,104)";
	
			for(i=0; box[i]!='\0'; i++){		
				MAP_UARTCharPut(UART5_BASE, box[i]);	
			}	
			SysCtlDelay(SysCtlClockGet() / (50 * 3));
			SysCtlDelay(SysCtlClockGet() / (50 * 3));
		}	
}
void pixel818Off(int player){
		int i=0;
	
		if(player==1){
			char box[]="AT93=(18,18,1,0)";
	
			for(i=0; box[i]!='\0'; i++){		
				MAP_UARTCharPut(UART5_BASE, box[i]);	
			}	
			SysCtlDelay(SysCtlClockGet() / (50 * 3));
			SysCtlDelay(SysCtlClockGet() / (50 * 3));
		}
		else{
			char box[]="AT93=(18,18,1,0)";
	
			for(i=0; box[i]!='\0'; i++){		
				MAP_UARTCharPut(UART5_BASE, box[i]);	
			}	
			SysCtlDelay(SysCtlClockGet() / (50 * 3));
			SysCtlDelay(SysCtlClockGet() / (50 * 3));
		}	
}
//pixel 23,18 at [3][4]
void pixe2318On(int player){
		int i=0;
	
		if(player==1){
			char box[]="AT93=(23,18,1,96)";
	
			for(i=0; box[i]!='\0'; i++){		
				MAP_UARTCharPut(UART5_BASE, box[i]);	
			}	
			SysCtlDelay(SysCtlClockGet() / (50 * 3));
			SysCtlDelay(SysCtlClockGet() / (50 * 3));
		}
		else{
			char box[]="AT93=(23,18,1,104)";
	
			for(i=0; box[i]!='\0'; i++){		
				MAP_UARTCharPut(UART5_BASE, box[i]);	
			}	
			SysCtlDelay(SysCtlClockGet() / (50 * 3));
			SysCtlDelay(SysCtlClockGet() / (50 * 3));
		}	
}
void pixe2318Off(int player){
		int i=0;
	
		if(player==1){
			char box[]="AT93=(23,18,1,0)";
	
			for(i=0; box[i]!='\0'; i++){		
				MAP_UARTCharPut(UART5_BASE, box[i]);	
			}	
			SysCtlDelay(SysCtlClockGet() / (50 * 3));
			SysCtlDelay(SysCtlClockGet() / (50 * 3));
		}
		else{
			char box[]="AT93=(23,18,1,0)";
	
			for(i=0; box[i]!='\0'; i++){		
				MAP_UARTCharPut(UART5_BASE, box[i]);	
			}	
			SysCtlDelay(SysCtlClockGet() / (50 * 3));
			SysCtlDelay(SysCtlClockGet() / (50 * 3));
		}	
}

//pixel 28,18 at [3][5]
void pixe2818On(int player){
		int i=0;
	
		if(player==1){
			char box[]="AT93=(28,18,1,96)";
	
			for(i=0; box[i]!='\0'; i++){		
				MAP_UARTCharPut(UART5_BASE, box[i]);	
			}	
			SysCtlDelay(SysCtlClockGet() / (50 * 3));
			SysCtlDelay(SysCtlClockGet() / (50 * 3));
		}
		else{
			char box[]="AT93=(28,18,1,104)";
	
			for(i=0; box[i]!='\0'; i++){		
				MAP_UARTCharPut(UART5_BASE, box[i]);	
			}	
			SysCtlDelay(SysCtlClockGet() / (50 * 3));
			SysCtlDelay(SysCtlClockGet() / (50 * 3));
		}	
}
void pixe2818Off(int player){
		int i=0;
	
		if(player==1){
			char box[]="AT93=(28,18,1,0)";
	
			for(i=0; box[i]!='\0'; i++){		
				MAP_UARTCharPut(UART5_BASE, box[i]);	
			}	
			SysCtlDelay(SysCtlClockGet() / (50 * 3));
			SysCtlDelay(SysCtlClockGet() / (50 * 3));
		}
		else{
			char box[]="AT93=(28,18,1,0)";
	
			for(i=0; box[i]!='\0'; i++){		
				MAP_UARTCharPut(UART5_BASE, box[i]);	
			}	
			SysCtlDelay(SysCtlClockGet() / (50 * 3));
			SysCtlDelay(SysCtlClockGet() / (50 * 3));
		}	
}

//pixel 33,18 at [3][6]
void pixe3318On(int player){
		int i=0;
	
		if(player==1){
			char box[]="AT93=(33,18,1,96)";
	
			for(i=0; box[i]!='\0'; i++){		
				MAP_UARTCharPut(UART5_BASE, box[i]);	
			}	
			SysCtlDelay(SysCtlClockGet() / (50 * 3));
			SysCtlDelay(SysCtlClockGet() / (50 * 3));
		}
		else{
			char box[]="AT93=(33,18,1,104)";
	
			for(i=0; box[i]!='\0'; i++){		
				MAP_UARTCharPut(UART5_BASE, box[i]);	
			}	
			SysCtlDelay(SysCtlClockGet() / (50 * 3));
			SysCtlDelay(SysCtlClockGet() / (50 * 3));
		}	
}
void pixe3318Off(int player){
		int i=0;
	
		if(player==1){
			char box[]="AT93=(33,18,1,0)";
	
			for(i=0; box[i]!='\0'; i++){		
				MAP_UARTCharPut(UART5_BASE, box[i]);	
			}	
			SysCtlDelay(SysCtlClockGet() / (50 * 3));
			SysCtlDelay(SysCtlClockGet() / (50 * 3));
		}
		else{
			char box[]="AT93=(33,18,1,0)";
	
			for(i=0; box[i]!='\0'; i++){		
				MAP_UARTCharPut(UART5_BASE, box[i]);	
			}	
			SysCtlDelay(SysCtlClockGet() / (50 * 3));
			SysCtlDelay(SysCtlClockGet() / (50 * 3));
		}	
}

//pixel 3,23 at [4][0]
void pixe323On(int player){
		int i=0;
	
		if(player==1){
			char box[]="AT93=(3,23,1,96)";
	
			for(i=0; box[i]!='\0'; i++){		
				MAP_UARTCharPut(UART5_BASE, box[i]);	
			}	
			SysCtlDelay(SysCtlClockGet() / (50 * 3));
			SysCtlDelay(SysCtlClockGet() / (50 * 3));
		}
		else{
			char box[]="AT93=(3,23,1,104)";
	
			for(i=0; box[i]!='\0'; i++){		
				MAP_UARTCharPut(UART5_BASE, box[i]);	
			}	
			SysCtlDelay(SysCtlClockGet() / (50 * 3));
			SysCtlDelay(SysCtlClockGet() / (50 * 3));
		}	
}
void pixe323Off(int player){
		int i=0;
	
		if(player==1){
			char box[]="AT93=(3,23,1,0)";
	
			for(i=0; box[i]!='\0'; i++){		
				MAP_UARTCharPut(UART5_BASE, box[i]);	
			}	
			SysCtlDelay(SysCtlClockGet() / (50 * 3));
			SysCtlDelay(SysCtlClockGet() / (50 * 3));
		}
		else{
			char box[]="AT93=(3,23,1,0)";
	
			for(i=0; box[i]!='\0'; i++){		
				MAP_UARTCharPut(UART5_BASE, box[i]);	
			}	
			SysCtlDelay(SysCtlClockGet() / (50 * 3));
			SysCtlDelay(SysCtlClockGet() / (50 * 3));
		}	
}

//pixel 8,23 at [4][1]
void pixe823On(int player){
		int i=0;
	
		if(player==1){
			char box[]="AT93=(8,23,1,96)";
	
			for(i=0; box[i]!='\0'; i++){		
				MAP_UARTCharPut(UART5_BASE, box[i]);	
			}	
			SysCtlDelay(SysCtlClockGet() / (50 * 3));
			SysCtlDelay(SysCtlClockGet() / (50 * 3));
		}
		else{
			char box[]="AT93=(8,23,1,104)";
	
			for(i=0; box[i]!='\0'; i++){		
				MAP_UARTCharPut(UART5_BASE, box[i]);	
			}	
			SysCtlDelay(SysCtlClockGet() / (50 * 3));
			SysCtlDelay(SysCtlClockGet() / (50 * 3));
		}	
}
void pixe823Off(int player){
		int i=0;
	
		if(player==1){
			char box[]="AT93=(8,23,1,0)";
	
			for(i=0; box[i]!='\0'; i++){		
				MAP_UARTCharPut(UART5_BASE, box[i]);	
			}	
			SysCtlDelay(SysCtlClockGet() / (50 * 3));
			SysCtlDelay(SysCtlClockGet() / (50 * 3));
		}
		else{
			char box[]="AT93=(8,23,1,0)";
	
			for(i=0; box[i]!='\0'; i++){		
				MAP_UARTCharPut(UART5_BASE, box[i]);	
			}	
			SysCtlDelay(SysCtlClockGet() / (50 * 3));
			SysCtlDelay(SysCtlClockGet() / (50 * 3));
		}	
}
//pixel 13,23 at [4][2]
void pixel323On(int player){
		int i=0;
	
		if(player==1){
			char box[]="AT93=(13,23,1,96)";
	
			for(i=0; box[i]!='\0'; i++){		
				MAP_UARTCharPut(UART5_BASE, box[i]);	
			}	
			SysCtlDelay(SysCtlClockGet() / (50 * 3));
			SysCtlDelay(SysCtlClockGet() / (50 * 3));
		}
		else{
			char box[]="AT93=(13,23,1,104)";
	
			for(i=0; box[i]!='\0'; i++){		
				MAP_UARTCharPut(UART5_BASE, box[i]);	
			}	
			SysCtlDelay(SysCtlClockGet() / (50 * 3));
			SysCtlDelay(SysCtlClockGet() / (50 * 3));
		}	
}
void pixel323Off(int player){
		int i=0;
	
		if(player==1){
			char box[]="AT93=(13,23,1,0)";
	
			for(i=0; box[i]!='\0'; i++){		
				MAP_UARTCharPut(UART5_BASE, box[i]);	
			}	
			SysCtlDelay(SysCtlClockGet() / (50 * 3));
			SysCtlDelay(SysCtlClockGet() / (50 * 3));
		}
		else{
			char box[]="AT93=(13,23,1,0)";
	
			for(i=0; box[i]!='\0'; i++){		
				MAP_UARTCharPut(UART5_BASE, box[i]);	
			}	
			SysCtlDelay(SysCtlClockGet() / (50 * 3));
			SysCtlDelay(SysCtlClockGet() / (50 * 3));
		}	
}
//pixel 18,23 at [4][3]
void pixel823On(int player){
		int i=0;
	
		if(player==1){
			char box[]="AT93=(18,23,1,96)";
	
			for(i=0; box[i]!='\0'; i++){		
				MAP_UARTCharPut(UART5_BASE, box[i]);	
			}	
			SysCtlDelay(SysCtlClockGet() / (50 * 3));
			SysCtlDelay(SysCtlClockGet() / (50 * 3));
		}
		else{
			char box[]="AT93=(18,23,1,104)";
	
			for(i=0; box[i]!='\0'; i++){		
				MAP_UARTCharPut(UART5_BASE, box[i]);	
			}	
			SysCtlDelay(SysCtlClockGet() / (50 * 3));
			SysCtlDelay(SysCtlClockGet() / (50 * 3));
		}	
}
void pixel823Off(int player){
		int i=0;
	
		if(player==1){
			char box[]="AT93=(18,23,1,0)";
	
			for(i=0; box[i]!='\0'; i++){		
				MAP_UARTCharPut(UART5_BASE, box[i]);	
			}	
			SysCtlDelay(SysCtlClockGet() / (50 * 3));
			SysCtlDelay(SysCtlClockGet() / (50 * 3));
		}
		else{
			char box[]="AT93=(18,23,1,0)";
	
			for(i=0; box[i]!='\0'; i++){		
				MAP_UARTCharPut(UART5_BASE, box[i]);	
			}	
			SysCtlDelay(SysCtlClockGet() / (50 * 3));
			SysCtlDelay(SysCtlClockGet() / (50 * 3));
		}	
}
//pixel 23,23 at [4][4]
void pixe2323On(int player){
		int i=0;
	
		if(player==1){
			char box[]="AT93=(23,23,1,96)";
	
			for(i=0; box[i]!='\0'; i++){		
				MAP_UARTCharPut(UART5_BASE, box[i]);	
			}	
			SysCtlDelay(SysCtlClockGet() / (50 * 3));
			SysCtlDelay(SysCtlClockGet() / (50 * 3));
		}
		else{
			char box[]="AT93=(23,23,1,104)";
	
			for(i=0; box[i]!='\0'; i++){		
				MAP_UARTCharPut(UART5_BASE, box[i]);	
			}	
			SysCtlDelay(SysCtlClockGet() / (50 * 3));
			SysCtlDelay(SysCtlClockGet() / (50 * 3));
		}	
}
void pixe2323Off(int player){
		int i=0;
	
		if(player==1){
			char box[]="AT93=(23,23,1,0)";
	
			for(i=0; box[i]!='\0'; i++){		
				MAP_UARTCharPut(UART5_BASE, box[i]);	
			}	
			SysCtlDelay(SysCtlClockGet() / (50 * 3));
			SysCtlDelay(SysCtlClockGet() / (50 * 3));
		}
		else{
			char box[]="AT93=(23,23,1,0)";
	
			for(i=0; box[i]!='\0'; i++){		
				MAP_UARTCharPut(UART5_BASE, box[i]);	
			}	
			SysCtlDelay(SysCtlClockGet() / (50 * 3));
			SysCtlDelay(SysCtlClockGet() / (50 * 3));
		}	
}

//pixel 28,23 at [4][5]
void pixe2823On(int player){
		int i=0;
	
		if(player==1){
			char box[]="AT93=(28,23,1,96)";
	
			for(i=0; box[i]!='\0'; i++){		
				MAP_UARTCharPut(UART5_BASE, box[i]);	
			}	
			SysCtlDelay(SysCtlClockGet() / (50 * 3));
			SysCtlDelay(SysCtlClockGet() / (50 * 3));
		}
		else{
			char box[]="AT93=(28,23,1,104)";
	
			for(i=0; box[i]!='\0'; i++){		
				MAP_UARTCharPut(UART5_BASE, box[i]);	
			}	
			SysCtlDelay(SysCtlClockGet() / (50 * 3));
			SysCtlDelay(SysCtlClockGet() / (50 * 3));
		}	
}
void pixe2823Off(int player){
		int i=0;
	
		if(player==1){
			char box[]="AT93=(28,23,1,0)";
	
			for(i=0; box[i]!='\0'; i++){		
				MAP_UARTCharPut(UART5_BASE, box[i]);	
			}	
			SysCtlDelay(SysCtlClockGet() / (50 * 3));
			SysCtlDelay(SysCtlClockGet() / (50 * 3));
		}
		else{
			char box[]="AT93=(28,23,1,0)";
	
			for(i=0; box[i]!='\0'; i++){		
				MAP_UARTCharPut(UART5_BASE, box[i]);	
			}	
			SysCtlDelay(SysCtlClockGet() / (50 * 3));
			SysCtlDelay(SysCtlClockGet() / (50 * 3));
		}	
}

//pixel 33,23 at [4][6]
void pixe3323On(int player){
		int i=0;
	
		if(player==1){
			char box[]="AT93=(33,23,1,96)";
	
			for(i=0; box[i]!='\0'; i++){		
				MAP_UARTCharPut(UART5_BASE, box[i]);	
			}	
			SysCtlDelay(SysCtlClockGet() / (50 * 3));
			SysCtlDelay(SysCtlClockGet() / (50 * 3));
		}
		else{
			char box[]="AT93=(33,23,1,104)";
	
			for(i=0; box[i]!='\0'; i++){		
				MAP_UARTCharPut(UART5_BASE, box[i]);	
			}	
			SysCtlDelay(SysCtlClockGet() / (50 * 3));
			SysCtlDelay(SysCtlClockGet() / (50 * 3));
		}	
}
void pixe3323Off(int player){
		int i=0;
	
		if(player==1){
			char box[]="AT93=(33,23,1,0)";
	
			for(i=0; box[i]!='\0'; i++){		
				MAP_UARTCharPut(UART5_BASE, box[i]);	
			}	
			SysCtlDelay(SysCtlClockGet() / (50 * 3));
			SysCtlDelay(SysCtlClockGet() / (50 * 3));
		}
		else{
			char box[]="AT93=(33,23,1,0)";
	
			for(i=0; box[i]!='\0'; i++){		
				MAP_UARTCharPut(UART5_BASE, box[i]);	
			}	
			SysCtlDelay(SysCtlClockGet() / (50 * 3));
			SysCtlDelay(SysCtlClockGet() / (50 * 3));
		}	
}

//pixel 3,28 at [5][0]
void pixe328On(int player){
		int i=0;
	
		if(player==1){
			char box[]="AT93=(3,28,1,96)";
	
			for(i=0; box[i]!='\0'; i++){		
				MAP_UARTCharPut(UART5_BASE, box[i]);	
			}	
			SysCtlDelay(SysCtlClockGet() / (50 * 3));
			SysCtlDelay(SysCtlClockGet() / (50 * 3));
		}
		else{
			char box[]="AT93=(3,28,1,104)";
	
			for(i=0; box[i]!='\0'; i++){		
				MAP_UARTCharPut(UART5_BASE, box[i]);	
			}	
			SysCtlDelay(SysCtlClockGet() / (50 * 3));
			SysCtlDelay(SysCtlClockGet() / (50 * 3));
		}	
}
void pixe328Off(int player){
		int i=0;
	
		if(player==1){
			char box[]="AT93=(3,28,1,0)";
	
			for(i=0; box[i]!='\0'; i++){		
				MAP_UARTCharPut(UART5_BASE, box[i]);	
			}	
			SysCtlDelay(SysCtlClockGet() / (50 * 3));
			SysCtlDelay(SysCtlClockGet() / (50 * 3));
		}
		else{
			char box[]="AT93=(3,28,1,0)";
	
			for(i=0; box[i]!='\0'; i++){		
				MAP_UARTCharPut(UART5_BASE, box[i]);	
			}	
			SysCtlDelay(SysCtlClockGet() / (50 * 3));
			SysCtlDelay(SysCtlClockGet() / (50 * 3));
		}	
}

//pixel 8,28 at [5][1]
void pixe828On(int player){
		int i=0;
	
		if(player==1){
			char box[]="AT93=(8,28,1,96)";
	
			for(i=0; box[i]!='\0'; i++){		
				MAP_UARTCharPut(UART5_BASE, box[i]);	
			}	
			SysCtlDelay(SysCtlClockGet() / (50 * 3));
			SysCtlDelay(SysCtlClockGet() / (50 * 3));
		}
		else{
			char box[]="AT93=(8,28,1,104)";
	
			for(i=0; box[i]!='\0'; i++){		
				MAP_UARTCharPut(UART5_BASE, box[i]);	
			}	
			SysCtlDelay(SysCtlClockGet() / (50 * 3));
			SysCtlDelay(SysCtlClockGet() / (50 * 3));
		}	
}
void pixe828Off(int player){
		int i=0;
	
		if(player==1){
			char box[]="AT93=(8,28,1,0)";
	
			for(i=0; box[i]!='\0'; i++){		
				MAP_UARTCharPut(UART5_BASE, box[i]);	
			}	
			SysCtlDelay(SysCtlClockGet() / (50 * 3));
			SysCtlDelay(SysCtlClockGet() / (50 * 3));
		}
		else{
			char box[]="AT93=(8,28,1,0)";
	
			for(i=0; box[i]!='\0'; i++){		
				MAP_UARTCharPut(UART5_BASE, box[i]);	
			}	
			SysCtlDelay(SysCtlClockGet() / (50 * 3));
			SysCtlDelay(SysCtlClockGet() / (50 * 3));
		}	
}
//pixel 13,28 at [5][2]
void pixel328On(int player){
		int i=0;
	
		if(player==1){
			char box[]="AT93=(13,28,1,96)";
	
			for(i=0; box[i]!='\0'; i++){		
				MAP_UARTCharPut(UART5_BASE, box[i]);	
			}	
			SysCtlDelay(SysCtlClockGet() / (50 * 3));
			SysCtlDelay(SysCtlClockGet() / (50 * 3));
		}
		else{
			char box[]="AT93=(13,28,1,104)";
	
			for(i=0; box[i]!='\0'; i++){		
				MAP_UARTCharPut(UART5_BASE, box[i]);	
			}	
			SysCtlDelay(SysCtlClockGet() / (50 * 3));
			SysCtlDelay(SysCtlClockGet() / (50 * 3));
		}	
}
void pixel328Off(int player){
		int i=0;
	
		if(player==1){
			char box[]="AT93=(13,28,1,0)";
	
			for(i=0; box[i]!='\0'; i++){		
				MAP_UARTCharPut(UART5_BASE, box[i]);	
			}	
			SysCtlDelay(SysCtlClockGet() / (50 * 3));
			SysCtlDelay(SysCtlClockGet() / (50 * 3));
		}
		else{
			char box[]="AT93=(13,28,1,0)";
	
			for(i=0; box[i]!='\0'; i++){		
				MAP_UARTCharPut(UART5_BASE, box[i]);	
			}	
			SysCtlDelay(SysCtlClockGet() / (50 * 3));
			SysCtlDelay(SysCtlClockGet() / (50 * 3));
		}	
}
//pixel 18,28 at [5][3]
void pixel828On(int player){
		int i=0;
	
		if(player==1){
			char box[]="AT93=(18,28,1,96)";
	
			for(i=0; box[i]!='\0'; i++){		
				MAP_UARTCharPut(UART5_BASE, box[i]);	
			}	
			SysCtlDelay(SysCtlClockGet() / (50 * 3));
			SysCtlDelay(SysCtlClockGet() / (50 * 3));
		}
		else{
			char box[]="AT93=(18,28,1,104)";
	
			for(i=0; box[i]!='\0'; i++){		
				MAP_UARTCharPut(UART5_BASE, box[i]);	
			}	
			SysCtlDelay(SysCtlClockGet() / (50 * 3));
			SysCtlDelay(SysCtlClockGet() / (50 * 3));
		}	
}
void pixel828Off(int player){
		int i=0;
	
		if(player==1){
			char box[]="AT93=(18,28,1,0)";
	
			for(i=0; box[i]!='\0'; i++){		
				MAP_UARTCharPut(UART5_BASE, box[i]);	
			}	
			SysCtlDelay(SysCtlClockGet() / (50 * 3));
			SysCtlDelay(SysCtlClockGet() / (50 * 3));
		}
		else{
			char box[]="AT93=(18,28,1,0)";
	
			for(i=0; box[i]!='\0'; i++){		
				MAP_UARTCharPut(UART5_BASE, box[i]);	
			}	
			SysCtlDelay(SysCtlClockGet() / (50 * 3));
			SysCtlDelay(SysCtlClockGet() / (50 * 3));
		}	
}
//pixel 23,28 at [5][4]
void pixe2328On(int player){
		int i=0;
	
		if(player==1){
			char box[]="AT93=(23,28,1,96)";
	
			for(i=0; box[i]!='\0'; i++){		
				MAP_UARTCharPut(UART5_BASE, box[i]);	
			}	
			SysCtlDelay(SysCtlClockGet() / (50 * 3));
			SysCtlDelay(SysCtlClockGet() / (50 * 3));
		}
		else{
			char box[]="AT93=(23,28,1,104)";
	
			for(i=0; box[i]!='\0'; i++){		
				MAP_UARTCharPut(UART5_BASE, box[i]);	
			}	
			SysCtlDelay(SysCtlClockGet() / (50 * 3));
			SysCtlDelay(SysCtlClockGet() / (50 * 3));
		}	
}
void pixe2328Off(int player){
		int i=0;
	
		if(player==1){
			char box[]="AT93=(23,28,1,0)";
	
			for(i=0; box[i]!='\0'; i++){		
				MAP_UARTCharPut(UART5_BASE, box[i]);	
			}	
			SysCtlDelay(SysCtlClockGet() / (50 * 3));
			SysCtlDelay(SysCtlClockGet() / (50 * 3));
		}
		else{
			char box[]="AT93=(23,28,1,0)";
	
			for(i=0; box[i]!='\0'; i++){		
				MAP_UARTCharPut(UART5_BASE, box[i]);	
			}	
			SysCtlDelay(SysCtlClockGet() / (50 * 3));
			SysCtlDelay(SysCtlClockGet() / (50 * 3));
		}	
}

//pixel 28,28 at [5][5]
void pixe2828On(int player){
		int i=0;
	
		if(player==1){
			char box[]="AT93=(28,28,1,96)";
	
			for(i=0; box[i]!='\0'; i++){		
				MAP_UARTCharPut(UART5_BASE, box[i]);	
			}	
			SysCtlDelay(SysCtlClockGet() / (50 * 3));
			SysCtlDelay(SysCtlClockGet() / (50 * 3));
		}
		else{
			char box[]="AT93=(28,28,1,104)";
	
			for(i=0; box[i]!='\0'; i++){		
				MAP_UARTCharPut(UART5_BASE, box[i]);	
			}	
			SysCtlDelay(SysCtlClockGet() / (50 * 3));
			SysCtlDelay(SysCtlClockGet() / (50 * 3));
		}	
}
void pixe2828Off(int player){
		int i=0;
	
		if(player==1){
			char box[]="AT93=(28,28,1,0)";
	
			for(i=0; box[i]!='\0'; i++){		
				MAP_UARTCharPut(UART5_BASE, box[i]);	
			}	
			SysCtlDelay(SysCtlClockGet() / (50 * 3));
			SysCtlDelay(SysCtlClockGet() / (50 * 3));
		}
		else{
			char box[]="AT93=(28,28,1,0)";
	
			for(i=0; box[i]!='\0'; i++){		
				MAP_UARTCharPut(UART5_BASE, box[i]);	
			}	
			SysCtlDelay(SysCtlClockGet() / (50 * 3));
			SysCtlDelay(SysCtlClockGet() / (50 * 3));
		}	
}

//pixel 33,28 at [5][6]
void pixe3328On(int player){
		int i=0;
	
		if(player==1){
			char box[]="AT93=(33,28,1,96)";
	
			for(i=0; box[i]!='\0'; i++){		
				MAP_UARTCharPut(UART5_BASE, box[i]);	
			}	
			SysCtlDelay(SysCtlClockGet() / (50 * 3));
			SysCtlDelay(SysCtlClockGet() / (50 * 3));
		}
		else{
			char box[]="AT93=(33,28,1,104)";
	
			for(i=0; box[i]!='\0'; i++){		
				MAP_UARTCharPut(UART5_BASE, box[i]);	
			}	
			SysCtlDelay(SysCtlClockGet() / (50 * 3));
			SysCtlDelay(SysCtlClockGet() / (50 * 3));
		}	
}
void pixe3328Off(int player){
		int i=0;
	
		if(player==1){
			char box[]="AT93=(33,28,1,0)";
	
			for(i=0; box[i]!='\0'; i++){		
				MAP_UARTCharPut(UART5_BASE, box[i]);	
			}	
			SysCtlDelay(SysCtlClockGet() / (50 * 3));
			SysCtlDelay(SysCtlClockGet() / (50 * 3));
		}
		else{
			char box[]="AT93=(33,28,1,0)";
	
			for(i=0; box[i]!='\0'; i++){		
				MAP_UARTCharPut(UART5_BASE, box[i]);	
			}	
			SysCtlDelay(SysCtlClockGet() / (50 * 3));
			SysCtlDelay(SysCtlClockGet() / (50 * 3));
		}	
}

void switchPixel(int player, int led, int ledLoc){
	
	if(ledLoc==33){
		if(led==1) {
			pixe33On(player);
		}
		else{
			pixe33Off(1);
		}
	}
	else if(ledLoc==83) {
		if(led==1) {
			pixe83On(player);
		}
		else {
			pixe83Off(1);
		}
	}
	else if(ledLoc==133) {
		if(led==1) {
			pixel33On(player);
		}
		else {
			pixel33Off(1);
		}
	}
	else if(ledLoc==183) {
		if(led==1) {
			pixel83On(player);
		}
		else {
			pixel83Off(1);
		}
	}
	else if(ledLoc==233) {
		if(led==1) {
			pixe233On(player);
		}
		else {
			pixe233Off(1);
		}
	}
	else if(ledLoc==283) {
		if(led==1) {
			pixe283On(player);
		}
		else {
			pixe283Off(1);
		}
	}
	else if(ledLoc==333) {
		if(led==1) {
			pixe333On(player);
		}
		else {
			pixe333Off(1);
		}
	}
	if(ledLoc==38){
		if(led==1) {
			pixe38On(player);
		}
		else{
			pixe38Off(1);
		}
	}
	else if(ledLoc==88) {
		if(led==1) {
			pixe88On(player);
		}
		else {
			pixe88Off(1);
		}
	}
	else if(ledLoc==138) {
		if(led==1) {
			pixel38On(player);
		}
		else {
			pixel38Off(1);
		}
	}
	else if(ledLoc==188) {
		if(led==1) {
			pixel88On(player);
		}
		else {
			pixel88Off(1);
		}
	}
	else if(ledLoc==238) {
		if(led==1) {
			pixe238On(player);
		}
		else {
			pixe238Off(1);
		}
	}
	else if(ledLoc==288) {
		if(led==1) {
			pixe288On(player);
		}
		else {
			pixe288Off(1);
		}
	}
	else if(ledLoc==338) {
		if(led==1) {
			pixe338On(player);
		}
		else {
			pixe338Off(1);
		}
	}
	else if(ledLoc==313){
		if(led==1) {
			pixe313On(player);
		}
		else{
			pixe313Off(1);
		}
	}
	else if(ledLoc==813) {
		if(led==1) {
			pixe813On(player);
		}
		else {
			pixe813Off(1);
		}
	}
	else if(ledLoc==1313) {
		if(led==1) {
			pixel313On(player);
		}
		else {
			pixel313Off(1);
		}
	}
	else if(ledLoc==1813) {
		if(led==1) {
			pixel813On(player);
		}
		else {
			pixel813Off(1);
		}
	}
	else if(ledLoc==2313) {
		if(led==1) {
			pixe2313On(player);
		}
		else {
			pixe2313Off(1);
		}
	}
	else if(ledLoc==2813) {
		if(led==1) {
			pixe2813On(player);
		}
		else {
			pixe2813Off(1);
		}
	}
	else if(ledLoc==3313) {
		if(led==1) {
			pixe3313On(player);
		}
		else {
			pixe3313Off(1);
		}
	}
	if(ledLoc==318){
		if(led==1) {
			pixe318On(player);
		}
		else{
			pixe318Off(1);
		}
	}
	else if(ledLoc==818) {
		if(led==1) {
			pixe818On(player);
		}
		else {
			pixe818Off(1);
		}
	}
	else if(ledLoc==1318) {
		if(led==1) {
			pixel318On(player);
		}
		else {
			pixel318Off(1);
		}
	}
	else if(ledLoc==1818) {
		if(led==1) {
			pixel818On(player);
		}
		else {
			pixel818Off(1);
		}
	}
	else if(ledLoc==2318) {
		if(led==1) {
			pixe2318On(player);
		}
		else {
			pixe2318Off(1);
		}
	}
	else if(ledLoc==2818) {
		if(led==1) {
			pixe2818On(player);
		}
		else {
			pixe2818Off(1);
		}
	}
	else if(ledLoc==3318) {
		if(led==1) {
			pixe3318On(player);
		}
		else {
			pixe3318Off(1);
		}
	}
	else if(ledLoc==323){
		if(led==1) {
			pixe323On(player);
		}
		else{
			pixe323Off(1);
		}
	}
	else if(ledLoc==823) {
		if(led==1) {
			pixe823On(player);
		}
		else {
			pixe823Off(1);
		}
	}
	else if(ledLoc==1323) {
		if(led==1) {
			pixel323On(player);
		}
		else {
			pixel323Off(1);
		}
	}
	else if(ledLoc==1823) {
		if(led==1) {
			pixel823On(player);
		}
		else {
			pixel823Off(1);
		}
	}
	else if(ledLoc==2323) {
		if(led==1) {
			pixe2323On(player);
		}
		else {
			pixe2323Off(1);
		}
	}
	else if(ledLoc==2823) {
		if(led==1) {
			pixe2823On(player);
		}
		else {
			pixe2823Off(1);
		}
	}
	else if(ledLoc==3323) {
		if(led==1) {
			pixe3323On(player);
		}
		else {
			pixe3323Off(1);
		}
	}
	if(ledLoc==328){
		if(led==1) {
			pixe328On(player);
		}
		else{
			pixe328Off(1);
		}
	}
	else if(ledLoc==828) {
		if(led==1) {
			pixe828On(player);
		}
		else {
			pixe828Off(1);
		}
	}
	else if(ledLoc==1328) {
		if(led==1) {
			pixel328On(player);
		}
		else {
			pixel328Off(1);
		}
	}
	else if(ledLoc==1828) {
		if(led==1) {
			pixel828On(player);
		}
		else {
			pixel828Off(1);
		}
	}
	else if(ledLoc==2328) {
		if(led==1) {
			pixe2328On(player);
		}
		else {
			pixe2328Off(1);
		}
	}
	else if(ledLoc==2828) {
		if(led==1) {
			pixe2828On(player);
		}
		else {
			pixe2828Off(1);
		}
	}
	else if (ledLoc==3328) {
		if(led==1) {
			pixe3328On(player);
		}
		else {
			pixe3328Off(1);
		}
	}
	
}
#endif /* GAME_BOARD */