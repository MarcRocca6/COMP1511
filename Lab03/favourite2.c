// Favourite Number 2
// Calculate and display some information about the user's entered
// integer.
// Created by
//  ... (z0000000)
//  ... (z0000000)
// Created on 2017-08-??
// Tutor's name (dayHH-lab)

#include <stdio.h>
#include <stdlib.h>

#define MY_FAVE 17

// Function prototypes
int square (int n);
void printOddOrEven (int n);
int multiply (int a, int b);

// DO NOT CHANGE THIS MAIN FUNCTION
int main (int argc, char *argv[]) {
    // Get the number, and check whether a valid integer was entered.
    int num;
    printf("Enter your favourite number: ");
    if (scanf("%d", &num) == 0) {
        printf("Error: please enter a integer!\n");
        return EXIT_FAILURE;
    }

    // Print out some facts:
    printf("You entered %d.\n", num);

    // Double the number.
    int doubled = multiply(num, 2);
    printf("%d doubled is %d.\n", num, doubled);

    // Squared.
    int squared = square(num);
    printf("%d squared is %d.\n", num, squared);

    // Their favorite times my favorite.
    int total = num * MY_FAVE;
    printf("%d x %d is %d.\n", num, MY_FAVE, total);

    // Whether it's odd or even.
    printOddOrEven(num);

    return EXIT_SUCCESS;
}

// Square the passed in integer (i.e. multiply it by itself).
int square (int n) {
    // REPLACE THIS WITH YOUR CODE
    return 0;
}

// Print whether the number is even or odd, in the format "n is even.".
void printOddOrEven (int n) {
    // REPLACE THIS WITH YOUR CODE
}

// Multiply the two given numbers together.
int multiply (int a, int b) {
    // REPLACE THIS WITH YOUR CODE
    return 0;
}
