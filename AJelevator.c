/*
	Amyn Jiwani							
	June 14th, 2019
	This program employs conditionals- namely if-statements and variants of if-statements to control an
	elevator. By having four floors in total on the elevator, the if-statements can take a command from any
	one of the floors, and use direction to move the car to whatever floor desired.						
*/

#include <stdio.h> //needed for initialization
#include <unistd.h> //needed for initialization
#include </usr/include/sys/io.h> //needed for initialization

#define BASEPORT 0x378 /* parallel or lpl port addres */

int floornumber=1; //defined floor number
int call=7.2; //how long it takes to go up 

int main()
{

printf("Welcome to (a miniature version of) Trump Towers!\n")
printf("Press a number from 1 to 4.\n"); // initiation command

ioperm(BASEPORT,3,1); 

	outb(0, BASEPORT); //starting binary value with ports (not released) 
	sleep(1); 


	while (1) {
	
	char direction=getchar(); //helps for floor calls
	getchar();


//code for floor 1
if (floornumber == 1) {
	if (direction == '1') {
		printf("Already on the 1st Floor\n");
        }

	else if (direction == '2') {
		printf("Transporting to Floor 2\n");
	outb(0b0000001, BASEPORT);
	sleep(call); //how long it will be going up
	outb(0b11111100, BASEPORT);
	floornumber = 2;
	}

	else if (direction == '3') {
		printf("Going to Floor 3\n");
	outb(0b0000001, BASEPORT);
	sleep(call*2); //how long it will be going up
	outb(0b11111100, BASEPORT);
	floornumber = 3;
	}
	else if (direction == '4'){
		printf("Going to Floor 4\n");
	outb(0b0000001, BASEPORT);
	sleep(call*3); //how long it will be going up.
	outb(0b11111100, BASEPORT);
	floornumber = 4;
	}
}
//if number 2 is called, commands called from the position of two
if (floornumber == 2) {
	if (direction == '2') {
		printf("You Have Reached The 2nd Floor");	
	}

	else if (direction == '3'){
		printf("Going To Floor 3\n");
	outb(0b0000001, BASEPORT);
	sleep(call); //how long it will be going up
	outb(0b11111100, BASEPORT);
	floornumber = 3;
	}

	else if (direction == '4'){
		printf("Going To Floor 4\n");
	
	sleep(call*2); //how long it will be going up
	outb(0b11111100, BASEPORT);
	floornumber = 4;
	}
	else if (direction=='1'){
	printf("Going Down To Floor 1\n");
	outb(0b0000010, BASEPORT);
	sleep(call);
	outb(0b11111100, BASEPORT);
	printf("You Have Reached The 1st Floor\n");
	floornumber = 1;
	}	
}

//if number 3 is called, commands called from the position of three
if (floornumber == 3) {
	if (direction == '3') {
		printf("You Have Reached The 3rd Floor\n");
	}

	else if (direction == '2') {
		printf("Going Down To Floor 2\n");
	outb(0b0000010, BASEPORT);
	sleep(call);
	outb(0b11111100, BASEPORT);
	printf("You Have Reached The 2nd Floor\n");
	floornumber = 2;
	}

	else if (direction == '1') {
		printf("Going Down To Floor 1\n");\
	outb(0b0000010, BASEPORT);
	sleep(call*2);
	outb(0b11111100, BASEPORT);
	printf("You Have Reached The 1st Floor\n");
	floornumber = 1;
	}
	else if (direction == '4'){
		printf("Going To Floor 4\n");
	outb(0b0000001, BASEPORT);
	sleep(call); //how long it will be going up.
	outb(0b11111100, BASEPORT);
	floornumber = 4;
	}
}

//if number 4 is called, commands called from the position of four
if (floornumber == 4) {
	if (direction == '4') {
		printf("You Have Reached The 4th Floor\n");
	}

	else if (direction == '3'){
		printf("Going Down To Floor 3\n");
	outb(0b0000010, BASEPORT);
	sleep(call);
	outb(0b11111100, BASEPORT);
	printf("You Have Reached The 3rd Floor\n");
	floornumber = 3;
	}

	else if (direction == '2'){
		printf("Going Down To Floor 2\n");
	outb(0b0000010, BASEPORT);
	sleep(call*1.5); //works
	outb(0b11111100, BASEPORT);
	printf("You Have Reached The 2nd Floor\n");
	floornumber = 2;
	}
	else if (direction=='1'){
		printf("Going Down To Floor 1\n");
	outb(0b0000010, BASEPORT);
	sleep(call*3);
	outb(0b11111100, BASEPORT);
	printf("You Have Reached The 1st Floor\n");
	floornumber = 1;
	}
}
}

ioperm(BASEPORT,3,0); // We don't need the ports anymore
				// release parts for other programs
return 0;

}

//End of the program

