
// Matthew Harker
// Chapter 1 Exercise 12

#include <stdio.h>

#define IN  1   // inside a word
#define OUT 0   // outside a word

int main()
{
    int c, state;

    state = OUT;

    while((c = getchar()) != EOF)
    {
        if ((c == ' ' || c == '\t' || c == '\n'))
        {
            if (state == IN)
            {
                putchar('\n');
                state = OUT;
            }
        }
        else
        {
            state = IN;
            putchar(c);
        }
    }
}

// Prints one "word" per line
// Word is defined as a series are character inbetween spaces, tabs, and newlines