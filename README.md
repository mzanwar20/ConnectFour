Group Members:
MUHAMMAD Z. ANWAR 
JOMARC JULIUS SILOS 
JUMANA AL-TAMEEMI 

DEMO:
https://drive.google.com/file/d/1l8vb8zBYo4zMRLVjQZmEs1XrcBaZf81J/view?usp=sharing

For our group project, we have decided to create a Connect Four game which utilizes two push buttons, a Lumex LED Display, and our Tiva Board. Connect Four is a two-player connection board game, in which the players choose a color and then take turns dropping colored tokens into a seven-column, six-row vertically suspended grid. The game in designed to be played by two players at a time. We have decided to execute the following project idea because in our free time we enjoy playing Connect Four with our friends and family. We also wanted to create a Connect Four game using the Tiva Board since we wanted to apply our understanding and gain experiences pertaining to working with the Tiva microcontroller. 

Hardware:
1.	TI Tiva C Series TM4C123G
2.	Lumex ezDisplay - UART Enhancement Display
3.	SparkFun Bi-Directional Logic Level Converter
4.	2x Pushbuttons

Hardware Design:
Our hardware design required us to create a software set to work together in sync. The buttons, the Tiva board, and the LED Matrix are the main hardware component for us. Firstly, our project must implement a real-time system based on one or more TI TivaWare TM4C launchpad. Secondly, the launchpad communicates with the Lumex display, and the push buttons for the user input, in real time. The display must update with the user input because the current location of the user matters to be able to play the game without hassle. The hardware requirements for the Lumex display required for us to include a logic level converter to our design. The launchpad sends out data at 3.3V, however, the Lumex display requires a 5V signal UART input to carry out the AT commands sent from the launchpad; hence, the logic level converter added between the launchpad and the Lumex display to convert the 3.3V data signal to a 5V signal for the display. Lastly, the push buttons are connected to the GPIO pins on the launchpad, which are used to move the location of the user to different columns, and a second button to accept the current location as the turn played but the user. While a booster pack was present in our initial project brainstorm, we decided to use the USB power provided by a phone charger. 

Software Design:
To make the game, as seen in figure 2, the software was the most important part of our project. The Lumex display and the push buttons were just there to get input and display output, but to manage the input, and update the display, had to be written in a way that it would be as efficient as possible. The code for this project consists of three header files that were written for specific purposes:
  1.	DisplayCommands.h
  This header file was where most of the Lumex display modified AT commands were written, so that when called the board will be updated to the specific design that we had created. This header file contains the default layout for the board, the turn indication for which players turn it is, and the winner of the game.
  2.	GameBoard.h
  This header file works closely with the game that is running. This is where the location of the player is written and called. The cursor indication, which is the on and off of the current location, creates a blinking box, much like a cursor on a document indication where the user is. This lets the user know their current location on the board, and it updates as the buttons are pushed by the user. There is a 2D matrix created with the pixel location within the board where the player can be and is used during the game to update the location. 
  3.	WinnerCheck.h
  This header file checks for the winner of the game. This has a 3D matrix which has the player input. This is what is called after each input to see if there is a winner. If there is a winner, we are returned a player 1 or 2, which gets used to pass back to DisplayCommands.h to print of the winning players win screen. 
The main program is present in the UART_Test.c file. This is where the initial data is set, and updated data is saved. This is where the main 3D game matrix called taken_cells is located, which works with the WinnerCheck.h to return if there is a winner. 
	The interrupt used for the input buttons is also present here and initialized. The interrupt creates a much more seamless user experience when playing the game. Without the interrupt the player has the keep pressing the button to move their piece location on the board, but with the interrupt as soon as there is a button input, the launchpad takes that input and sends it to the game to be updated. At the end of each winning condition, the board resets to its original condition and the game begins again. 

Discussion:
While we have made the game that we initially had designed, and have implemented a completely playable game, there are many things that we wish we could have done given more time. For starters, we wish we could have implemented the UART and the timer interrupts to be able to make the display more efficient, but also make the code a lot for efficient to update. As it is right now, there are a lot of the code that can be removed if we set up at least the timer interrupts. 
Secondly, we really wanted to create a function to send out the AT commands to the display, but we were not able to create w function that could take the size of the current input string and adjust itself to send out a certain part of the code. We also could have made the code a lot of efficient if we were able to implement this function. 
Lastly, a lot of the code that we have written can be written to become a lot more efficient. We are happy to have created different header files to take care of certain parts of the code, but we could make the code a lot more efficient, which would make it scalable in the future as well. It will be easy to implement games like Tic-Tac-Toe if the code can be made more efficient. 
Conclusion:
	We are really pleased with how our project has come out. We were able to create the game we set out to make and were able to adapt to many issues along the way. After successfully programming the Connect Four game, we learned how to operate the Lumex LED display. Additionally, we were able to gain more practice with working with header files in C programming. We were able to grasp the importance of logic level converters. A lot of what we have learned we will be able to use in the future projects, but also, we are open to keep working on our current project to make it more concise and efficient, and perhaps even try and implement a second game. 
