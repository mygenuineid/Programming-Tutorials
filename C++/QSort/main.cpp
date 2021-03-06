// Done by TheTutor -- 12/16/01

/*
	This tutorial goes over the function qsort() -- A function that is a great array sorting
	function --	Some people might not use qsort() because they're not sure how to use it
	So this	tutorial is going to introduce you to qsort() if you don't know about it
	and show you how to properly use it

	Let the sorting begin!
*/

#include <search.h> // Include this file to use "qsort"

#include <iostream>
using namespace std;

#define MAX 15 // Max number of elements in the array

// This function prints out an array of ints
// "num" equals the number of ints to print
void printArray(int*, int num);

// Here is our first function that deals with qsort() -- qsort() requires you to pass in
// a pointer to a "compare function" -- This function needs to be a function that COMPARES
// two elements in the array we'll be sorting -- The return values work like this:
// Return a number less than zero if element1 is less than element2 
// Return if 0 element1 equals element2
// Return a number greater than zero if element1 is greater than element2
// If you look here at the function declaration, you'll notice we're passing in
// "const void*" for element 1 and 2 -- The reason we HAVE to pass in a const void* is 
// that qsort() can sort ANY data type and the prototype of the function expects you
// to pass it in like this ALSO by passing a "const" variable we guarantee that compare()
// CAN NOT change anything we pass it (which is good we want our array sorted not modified)
// When we implement compare we'll typecast the data to "int" so we can properly
// code the function
int compare(const void *element1, const void *element2);

// In main we're going to make an array of integers -- Print them to the screen, sort them, 
// then print the sorted array to the screen and be out %)
int main()
{
	// First we need an array
	int array[MAX] = {0}; // Zero it out for starters

	for(int i = 0; i < MAX; i++)
		array[i] = rand()%200; // Make some random integers

	printArray(array,MAX);

	// Okay qsort() by parameter:
	// array -- This is a pointer to an array of data for sorting AGAIN this can 
	//			be an array of floats, doubles, of structs you define, whatever
	// MAX -- This is the number of elements in the array
	// sizeof(int) -- This is "an array element size in bytes" -- qsort() needs to know 
	//				  the size of the "variable type" you're passing it
	//				  So if you were passing in an array of floats, this would be sizeof(float)
	// compare -- This is the function we implemented that TELLS qsort() how to arrange the
	//			  data -- the declaration for this function looks this:
	//			  int (__cdecl *compare )(const void *elem1, const void *elem2)
	//			  Which as you can see is pretty ugly and scary :)
	qsort(array,MAX,sizeof(int),compare); // Sort the array

	printArray(array,MAX);

		return 0;
}

// Print the array -- "num" is how many number our in the array
void printArray(int *aaa, int num)
{
	for(int i = 0; i < num; i++)
		cout << aaa[i] << " ";

	cout << endl << endl; // Some spacing
}

// Okay here is the compare function -- As you can see it's really simple :)     [no really]
// Remember we pass back "a negative number" if element1 < element2
//						 "a positive number" if element1 > element2
//						 and zero if element1 == element2
int compare(const void *element1, const void *element2)
{
	// So what's with all the ()'s and *'s ???
	// Well first lets just look at this:
	// *(int*)element1
	// the "(int*)" says "Okay this void* that was passed in is really an int*"
	// the '*' then to the left of "(int*)" says "Dereference the pointer"
	// The same thing applies for "element2" -- So when it's all said and done you'll get the 
	// integer values stored at the memory addresses pointed to by element1 and element2, then
	// you'll return the value that's obtained by subtracting them -- Simple as that :)
	return *(int*)element1 - *(int*)element2;
}


/*
	Fact File ---

	Q: Do I really have to name my "compare function" compare?
	A: No -- Name it whatever makes you breathe heavy :)

	Q: Do I really have to declare my function using const void* -- I mean
	   if I know I'm passing in integers can I do this:
	   int compare(const int *e1, const int *e2); ?
	A: No -- It's my way or the highway

	Q: Is qsort() fast?
	A: Yep, qsort stands for "quick sort"

	Q: I don't have <search.h> can I still use qsort()?
	A: Try including <stdlib.h> in place of <search.h>

	Q: What if I want to sort greatest to least?
	A: Just switch "element1" and "element2" in the compare function implementation

	More questions?  Well post 'em at www.GameTutorials.com
		
*/

/*----------------------------*\
|  TheTutor                    |
|  thetutor@gametutorials.com  |
|  � 2000-2003 GameTutorials   |
\*----------------------------*/