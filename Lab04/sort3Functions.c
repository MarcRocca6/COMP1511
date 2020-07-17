// Read in three numbers, and print them out in sorted order,
// using functions.
// Created by
//  ...(z0000000)
//  ...(z0000000)
// Created on 2017-08-??
// Tutor's name(dayHH-lab)

#include <stdio.h>
#include <stdlib.h>

// Function prototypes
int min2(int a, int b);
int max2(int a, int b);
int min3(int a, int b, int c);
int mid3(int a, int b, int c);
int max3(int a, int b, int c);

// DO NOT CHANGE THIS MAIN FUNCTION
int main (int argc, char *argv[]) {
    // Get the user-inputted numbers.
    int a, b, c;
    printf("Enter 3 numbers: ");
    scanf("%d %d %d", &a, &b, &c);

    // Print the minimum (smallest) number.
    printf("%d\n", min3(a, b, c));
    // Print the middle number.
    printf("%d\n", mid3(a, b, c));
    // Print the maximum (biggest) number.
    printf("%d\n", max3(a, b, c));

    return EXIT_SUCCESS;
}
// END OF MAIN FUNCTION

// Return the smallest value out of a and b.
int min2(int a, int b) {
    // PUT YOUR CODE HERE

    return 0; // CHANGE THIS LINE TO YOUR RETURN VALUE
}

// Return the largest value out of a and b.
int max2(int a, int b) {
    // PUT YOUR CODE HERE

    return 0; // CHANGE THIS LINE TO YOUR RETURN VALUE
}

// Return the smallest value out of a, b, and c.
int min3(int a, int b, int c) {
    // PUT YOUR CODE HERE

    return 0; // CHANGE THIS LINE TO YOUR RETURN VALUE
}

// Return the middle/median value out of a, b, and c.
int mid3(int a, int b, int c) {
    // PUT YOUR CODE HERE

    return 0; // CHANGE THIS LINE TO YOUR RETURN VALUE
}

// Return the largest value out of a, b, and c.
int max3(int a, int b, int c) {
    // PUT YOUR CODE HERE

    return 0; // CHANGE THIS LINE TO YOUR RETURN VALUE
}
