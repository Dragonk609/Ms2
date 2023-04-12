/*/////////////////////////////////////////////////////////////////////////
                        Assignment 1 - Milestone 3
Full Name  : Michael Lomugdang
Student ID#: 110751229
Email      : mlomugdang1@myseneca.ca
Section    : NFF

Authenticity Declaration:
I declare this submission is the result of my own work and has not been
shared with any other student or 3rd party content provider. This submitted
piece of work is entirely of my own creation.
/////////////////////////////////////////////////////////////////////////*/

// SAFE-GUARD: 
// It is good practice to apply safe-guards to header files
// Safe-guard's ensures only 1 copy of the header file is used in the project build
// The macro name should be mirroring the file name with _ for spaces, dots, etc.

// !!! DO NOT DELETE THE BELOW 2 LINES !!!
#ifndef CORE_H
#define CORE_H

// !!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!
// 
// Copy your work done from Milestone #2 (core.h) into this file
// 
// NOTE:
// - Organize your functions into the below categories
// - Make sure the core.c file also lists these functions in the same order!
// - Be sure to provide a BRIEF comment for each function prototype
// - The comment should also be copied to the core.c function definition
//
// !!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!


//////////////////////////////////////
// USER INTERFACE FUNCTIONS
//////////////////////////////////////

// Clear the standard input buffer
void clearInputBuffer(void);

// Wait for user to input the "enter" key to continue
void suspend(void);

//////////////////////////////////////
// USER INPUT FUNCTIONS
//////////////////////////////////////

//Test 1 Error Until input is valid
int inputInt(void);

//Test 2 Positive value only, When Negative will become error
int inputIntPositive(void);

//Test 3 If value input is within range
int inputIntRange(int lowerBound, int upperBound);

//Test 4 If certain character is entered it'll return. 
char inputCharOption(char str[]);

//Test 5 If certain string is entered it'll return.
void inputCString(char* str, int minChar, int maxChar);

//Test 9 display an array of phone numbers.
void displayFormattedPhone(const char* str);



// !!! DO NOT DELETE THE BELOW LINE !!!
#endif // !CORE_H