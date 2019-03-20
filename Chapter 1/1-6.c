
// Matthew Harker
// Chapter 1 Exercise 5

#include <stdio.h>

int main()
{
    int y, x;

    printf("Enter a character: ");
    x = getchar() == EOF;
    y = getchar() != EOF;

    printf("getchar() == EOF: %d\n", x);
    printf("getchar() != EOF: %d\n", y);
}

// Prints the two possible values of getchar() ?= EOF