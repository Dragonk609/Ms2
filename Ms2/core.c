/*/////////////////////////////////////////////////////////////////////////
                        Assignment 1 - Milestone 2
Full Name  : Michael Lomugdang
Student ID#: 110751229
Email      : mlomugdang1@myseneca.ca
Section    : NFF

Authenticity Declaration:
I declare this submission is the result of my own work and has not been
shared with any other student or 3rd party content provider. This submitted
piece of work is entirely of my own creation.
/////////////////////////////////////////////////////////////////////////*/

#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>

#include <stdio.h>
#include <ctype.h>
#include <string.h>

// Clear the standard input buffer
void clearInputBuffer(void)
{
    // Discard all remaining char's from the standard input buffer:
    while (getchar() != '\n')
    {
        ; // do nothing!
    }
}

// Wait for user to input the "enter" key to continue 
void suspend(void)
{
    printf("<ENTER> to continue...");
    clearInputBuffer();
    putchar('\n');
}

// Error Until input is valid
int inputInt(void) {
    char character = ' ';
    int value;

    while (character != '\n') {
        scanf(" %d%c", &value, &character);

        if (character != '\n') {
            clearInputBuffer();
            printf("Error! Input a whole number: ");
        }

    }

    // If appropriate value was entered this return value
    return value;
}

// Positive value only, When Negative will become error
int inputIntPositive(void) {
    char character = ' ';
    int value = 0;

    while (value <= 0) {
        scanf("%d%c", &value, &character);

        if (character != '\n') {
            clearInputBuffer();
            printf("Error! Input a number: ");
        }

        if (value <= 0) {
            printf("ERROR! Value must be > 0: ");
        }
    }

    // If appropriate value was entered this return value
    return value;
}

// If value input is within range
int inputIntRange(int lowerBound, int upperBound) {
    char character = ' ';
    int value = lowerBound - 1;

    while (!(value <= upperBound && value >= lowerBound)) {
        scanf("%d%c", &value, &character);

        if (character != '\n') {
            clearInputBuffer();
            printf("Error! Input a whole number: ");
        }

        else if (!(value <= upperBound && value >= lowerBound)) {
            printf("ERROR! Value must be between -3 and 11 inclusive: ");
        }

    }

    // If appropriate value was entered this return value
    return value;
}

// If certain string is entered it'll return. 
char inputCharOption(char str[]) {
    int i, count = 0;
    char input;

    while (count == 0) {
        scanf(" %c", &input);

        for (i = 0; str[i] != '\0'; i++) {
            if (input == str[i]) {
                count++;
            }
        }

        if (count == 0) {
            printf("ERROR: Character must be one of [%s]: ", str);
        }
    }


    // If appropriate value was entered this return value
    clearInputBuffer();
    return input;
}

// Returns if certain string is entered
void inputCString(char* str, int minChar, int maxChar) {
    int valid_input = 1;
    char ch = 'a';

    while (valid_input == 1) {
        int num = 0;
        // Takes a string as input until it sees a newline character
        while (ch != '\n' && num <= maxChar) {
            ch = getchar();
            str[num] = ch;
            num++;
        };

        // If the string is less than or equal to the maxChars we will just add '\0' to the end to mark the end of the string
        if (ch == '\n' && num <= (maxChar + 1)) {
            num--;
            str[num] = '\0';
        }
        // If length is more than maxChar, we will add '\0' to the end and ignore the extra characters. We will also remove the extra characters from the buffer.
        else {
            str[maxChar] = '\0';
            clearInputBuffer();
        }

        if (minChar == maxChar && num != minChar) {
            printf("ERROR: String length must be exactly %d chars: ", minChar);
            ch = 'a';
        }
        else if (num < minChar || num > maxChar) {
            if (num > maxChar) {
                printf("ERROR: String length must be no more than %d chars: ", maxChar);
                ch = 'a';
            }
            else if (num < minChar) {
                printf("ERROR: String length must be between %d and %d chars: ", minChar, maxChar);
                ch = 'a';
            }
        }
        else {
            valid_input = 0;
        }
    }
}

// display an array of phone numbers
void displayFormattedPhone(const char* str) {
    int num = 0, i;

    while (str != NULL && str[num] && isdigit(str[num])) {
        num++;
    }
    if (num == 10) {
        i = 0;
        printf("(");
        while (i < 3) {
            printf("%c", str[i]);
            i++;
        }
        printf(")");
        while (i < 6) {
            printf("%c", str[i]);
            i++;
        }
        printf("-");
        while (i < 10) {
            printf("%c", str[i]);
            i++;
        }
    }
    else {
        printf("(___)___-____");
    }
    if (str != 0) {
        for (i = 0; str[i] != '\0'; i++)
            num++;
    }
}