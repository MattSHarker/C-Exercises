
// Matthew Harker
// Chapter 1 Exercise 13

#include <stdio.h>

#define MAX_LENGTH 10   // arbitrary value

int main()
{
    // initialize variables
    int wordLengths[MAX_LENGTH + 1];    // stores the number of words per length
    int nc = 0;                         // counts the Number of Characters per word
    int c = EOF;

    // initialize all of the array's values to 0
    for (int i = 0; i <= MAX_LENGTH; ++i)
        wordLengths[i] = 0;
    
    // count the sizes
    while((c = getchar()) != EOF)
    {
        // if a word ends
        if (c == ' ' || c == '\t' || c == '\n')
        {
            // if it's within range add it to the proper size
            if (0 < nc && nc <= MAX_LENGTH)
                ++wordLengths[nc-1];
            
            // otherwise add it to the larger size
            else if (nc > MAX_LENGTH)
                ++wordLengths[MAX_LENGTH+1];
            
            nc = 0; // reset counter
            continue;
        }

        ++nc;   // incriment size of current word
    }

    // print the size <= MAX_LENGTH
    for (int i = 0; i < MAX_LENGTH; ++i)
    {
        printf("|%3d| ", i+1);
        for (int j = 0; j < wordLengths[i]; ++j)
            putchar('|');
        
        putchar('\n');
    }

    // print the sizes > MAX_LENGTH
    printf("|>%2d| ", MAX_LENGTH+1);
    for (int i = 0; i < wordLengths[MAX_LENGTH+1]; ++i)
        putchar('|');
    
    putchar('\n');

    return 0;
}

// prints a horizontal histogram of the amount of different sized words
