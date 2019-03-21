
// Matthew Harker
// Chapter 1 Exercise 9

#include <stdio.h>

int main()
{
    int c, prev;

    printf("Enter a string: ");

    while((c = getchar()) != EOF)
    {
        if (c != ' ' || prev != ' ')    // the opposite of c is ' ' AND prev is ' '
        {
            prev = c;
            putchar(c);
        }
    }

    return 0;
}

// When the string encounters multiple spaces in a row,
// it will only print one out