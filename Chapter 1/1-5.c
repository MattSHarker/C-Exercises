
// Matthew Harker
// Chapter 1 Exercise 5

#include <stdio.h>

int main()
{
    float fahr, celsius;
    int lower, upper, step;

    lower = 0;
    upper = 300;
    step = 20;

    fahr = upper; // ... = lower
    
    printf("  F  |   C\n");
    printf("-----|------\n");

    while (fahr >= lower)   // ... <= upper
    {
        celsius = (5.0 / 9.0) * (fahr - 32);
        printf("%3.0f  |%6.1f\n", fahr, celsius);
        fahr = fahr - step; // ... fahr + step
    }
}

// Comments in code indicated changes from 1-3