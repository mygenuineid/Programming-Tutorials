//***********************************************************************//
//																		 //
//		- "Talk to me like I'm a 3 year old!" Programming Lessons -		 //
//                                                                       //
//		$Author:		Ben Humphrey	digiben@gametutorials.com		 //
//																		 //
//		$Program:		Counting										 //
//																		 //
//		$Description:	Prints a given number range in a while loop		 //
//																		 //
//		$Date:			5/18/00											 //
//																		 //
//***********************************************************************//

#include <stdio.h>

void main()									// The beginning of our program
{
	int min=0, max=0; 					    // We initialize 2 integers (number) variables to store
											// Our range.  We set them equal to zero or else they
											// Will be some crazy number like -858993460.  We could
											// Also have said:
											//					int min=0;
											//					int max=0;
											// They are the same thing, it is just cleaner the other way

											// Now we prompt the user to input a number for the min
	printf("Input your first number to count from: ");
											// Then we wait until they press <enter> and read what
											// They typed in , then storing it in the variable "min"
											// We use "%d" because that means we are reading in an integer (number)
	scanf("%d", &min);						// See the "&" ?  That means we are putting what ever is typed in, at the memory address of the variable.
											// Here is how this works, it is kinda confusing.  A when are variable is allocated,
											// And when I say allocated, We tell windows that we will need a certain amount of memory from the system.
											// When windows responds, it gives us a memory location to store the info for that variable.
											// We always want to use the least amount of memory.  For small programs like this it isn't important,
											// But when you get into HUGE projects, it is of UTMOST importance.  It goes fast.  Trust me.
											// So, generally we only want to use the LEAST amount of variables as possible to conserve memory.
											// This is where you start to determine a good programmer:  The fastest and most efficient way.
											// I still struggle with this, as does EVERYONE else.  There is always a better way.
											// Now we prompt the user to input a number for the max
	printf("Input your last number to count to: ");
											// We then read in the highest number
	scanf("%d", &max);
											// Now here comes the while loop:
											// This is called a "While Loop".  You will use these a tremendous amount.
											// A "While Loop" is very similar to a for loop, except there is less going on.
											// " while ( this is true ) do what ever is inside my brackets { }"
											// That is what the while loop is doing.  So in this case,
											// "while ( min is less than or equal to max ) { print out the value of min , then add 1 to min }
											// Let's say we chose 5 for min and 10 for max.
											// "while ( 5 is less than or equal to 10 ) etc....
											// This will print out 5, then 6, then 7, then 8, then 9, then 10 (it will print 10 because 10 is less than or equal to 10 )
											// Then when min becomes 11, 11 isn't <= to 10, so it stops and doesn't do
											// What's in the brackets, it skips them.  No More looping
	while(min <= max)
	{										// Do what's inside these brackets until the expression is FALSE ( when min is > than max).
        printf("%d\n", min);				// We use %d again because we are printing out a number.  min is our number.  ("\n" goes to the next line) 
		min++;								// Increment min by 1.  (remember, this is the same thing as :  "min = min + 1" , just shorter.
	}										// Do what's inside these brackets until the expression is FALSE ( when min is > than max).
											// You might be asking why you would use a "For Loop" verses a "While Loop"?
											// Well, in a for loop, you specify a variable to use as the counter, then a condition for the loop, then a increment value....
											// Where as , what if you don't WANT to specify all of that stuff, like what we did here
											// We could also do something like:  (remember that any text behind "//" is ignored by the compiler.
//   "while(max)				"           // This says, "while ( max does not equal 0) { print the value of max, decrement 1 from max } "
//   "{							"			
//	 "    printf("%d\n", max);  "			// This essentially prints the value of "max" down to zero.
//	 "	  max--;				"
//	 "}							"
											// The point being that we don't always need the whole structure of a "For Loop".  We could do the
											// Exact same thing with a for loop, however.  In general while loops are used when something needs to be 
											// repeated while a condition is true.  For loops are used when you want to loop for a specific
											// amount of times.
}											// We end "main()" ending our program

// We just completed our first while loop.  Pretending we typed in 10 and 15, here is the output:

// Input your first number to count from: <we type in 10 and press ENTER>
// Input your last number to count to:	  <we type in 15 and press ENTER>
// 10
// 11
// 12
// 13
// 14
// 15
// Press any key to continue				// Windows way of saying "Get out of my program!" :)

// To compile and run this program assuming you are using Visual C, type CONTROL-F5.

// � 2000-2003 GameTutorials