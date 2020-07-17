// Favourite Number 3.
// Calculate and display some information about a user-entered integer.
// Created by
//  ... (z0000000)
//  ... (z0000000)
// Created on 2017-08-??
// Tutor's name (dayHH-lab)

#include <stdio.h>
#include <stdlib.h>

#define TRUE  1
#define FALSE 0

#define LAST_TIMES_TABLE 12

// Function prototypes.
void printTimesTable (int n);
int factorial (int n);
int isPerfectNumber (int n);

int main (int argc, char *argv[]) {
    // !!! DO NOT CHANGE THIS MAIN FUNCTION !!! \\

    // Get a user-entered number.
    printf ("Enter your favourite number: ");

    // Check to see if a valid integer was entered.
    int num;
    if (scanf ("%d", &num) != 1) {
        printf ("Couldn't read an integer.\n");
        return EXIT_FAILURE;
    }

    // Check to see if the integer was positive.
    if (num < 0) {
        printf ("You didn't enter a positive number.\n");
        return EXIT_SUCCESS;
    }

    // Print out some facts.
    printf ("You entered %d.\n", num);

    // Print their number's factorial.
    int fact = factorial (num);
    printf ("%d! = %d\n", num, fact);

    // Print the times table.
    printTimesTable (num);

    // Print whether the number is a perfect number.
    if (isPerfectNumber (num) == TRUE) {
        printf ("%d is a perfect number.\n", num);
    } else {
        printf ("%d is not a perfect number.\n", num);
    }

    return EXIT_SUCCESS;
}

// END OF MAIN FUNCTION

// Print the 1-12 times tables of the inputted number.
void printTimesTable (int n) {
    // PUT YOUR CODE HERE
}

// Return the factorial of n.
int factorial (int n) {
    // PUT YOUR CODE HERE

    return 0; // change this line to your return value
}

// Return TRUE if n is a perfect number, FALSE otherwise.
int isPerfectNumber (int n) {
    // PUT YOUR CODE HERE

    return 0; // change this line to your return value
}