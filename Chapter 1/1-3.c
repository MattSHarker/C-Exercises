
// Matthew Harker
// Chapter 1 Exercise 3

#include <stdio.h>

int main()
{
    float fahr, celsius;
    int lower, upper, step;

    lower = 0;
    upper = 300;
    step = 20;

    fahr = lower;
    
    // additions to sample code start here
    printf("  F  |   C\n");
    printf("-----|------\n");
    // additions end here

    while (fahr <= upper)
    {
        celsius = (5.0 / 9.0) * (fahr - 32);
        printf("%3.0f  |%6.1f\n", fahr, celsius);
        fahr = fahr + step;
    }
}

// Created a heading for the temperature converter
// Took the liberty of adding some other visuals as well