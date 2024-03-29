# ElevatorProject
This assignment was my first complex Computer Engineering project. The main point of emphasis is a software counterpart corresponding with the construction of a working model elevator.

Explanation of Circuit Operation

The hardware of the Elevator contains two essential components: the Board and the Motor. The Board is made of components such as transistors, resistors, capacitors and LEDs, which each function when the board is turned on. Through a power supply, the board receives electrical power- controlled by the resistors and other electrical components. This power source is then used to run the motor, both of which are connected to the board by a set of wires.
The motor itself is also programmed by the board, as it also has a slot for a connector. This connector plugs into the computer, extrapolating the binary values provided by the program and its conditional statement. This is what’s used to program the motor, by translating these binary values into rotations that the motor does to move itself up and down. 

Explanation of Program Operation (Mostly Pseudocode)

The program, written in C, utilizes a multitude of conditionals; in particular,” if statements” and “else if” statements to move an elevator up and down depending on whichever floor is called. Because there are different options as to what floor can be called, conditionals like these can allow for certain actions to be performed whenever a certain command is called that the “if statement” matches up with. 
There are also two essential variables present in the program: “floornumber” and “direction”, both having imputable values. The floornumber variable is responsible for recognizing what floor number the car of the elevator’s on- based on what was preliminarily pressed at the initiation of the program.  These numbers can range from one to four- as there are four floors present in the elevator. Depending on what floor the car is currently on, it can relay and act upon the set of commands accordingly. One important thing to remember about the program is that it will properly function when the car is placed on floor one before the program’s start.
The second variable, direction is responsible for the user’s input during the program. The user has to input a value between one and four in order to essentially call the car to another floor based on the previous variable. This allows for the commands to invoke depending on what floor was called. These commands involve a call variable that controls how long it takes for the elevator to reach the desired floor. Based on the floor position in relation to the current floor, the value is manipulated accordingly. Binary values are used (along with the BASEPORT) to determine whether the elevator’s direction is up or down. In addition, print commands are also issued based on whether the conditional’s requirements are met. 
An example of both variables occurring in the program would be in Figure 3. The floornumber command is set to 4 (based on a previous command).  From there, floors 1-4 can be called and conditional commands will be invoked based on selection. If floor 4 were to be called, an appropriate response of “Already on floor 4” would be given, as the car can’t travel to an already present floor. For floors 1, 2 and 3, the program will guide the car downward to the appropriate floor.
 
Additional Information:

The following are the materials (both Hardware and Software) used in the Summative Elevator Assignment:
GCC C Programming, 
Motor, 
3 pieces Foam Core (71.10cm x 55.8cm x 0.20cm), 
Dowel (30cm), 
Glue Gun and Tape- both used for securing parts, 
Spray Paint (Dark Blue),  
Box-Cutter, 
Ruler
