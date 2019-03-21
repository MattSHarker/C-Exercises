
// Matthew Harker
// Chapter 1 Exercise 10

#include <stdio.h>

int main()
{
    int c;

    printf("Enter a string: ");

    while((c = getchar()) != EOF)
    {
        if (c == '\b')      // if char is a newline
        {
            putchar('\\');
            putchar('b');
        }
        else if (c == '\t') // if char is a tab
        {
            putchar('\\');
            putchar('t');
        }
        else if (c == '\\')
        {
            putchar('\\');
            putchar('\\');
        }
        else                // everything else
        {
            putchar(c);
        }
    }
}

// Replaces tabs with \t and backspaces with \b when printed to the console