
// Matthew Harker
// Chapter 1 Exercise 8

#include <stdio.h>

int main()
{
    int c, b, t, nl;

    b = 0;      // blanks
    t = 0;      // tabs
    nl = 0;     // newlines

    printf("Enter a string: ");

    while((c = getchar()) != EOF)
    {
        if (c == ' ')
            ++b;
        if (c == '\t')
            ++t;
        if (c == '\n')
            ++nl;
    }

    printf("Blanks: %d\nTabs: %d\nNewLines: %d\n", b, t, nl);
}

// Prints the number of blanks, tabs, and newlines
// After typing the string, on a blank line press ctrl-Z then enter