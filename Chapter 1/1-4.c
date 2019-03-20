
// Matthew Harker
// Chapter 1 Exercise 3

#include <stdio.h>

int main()
{
    float fahr, celsius;
    int lower, upper, step;

    lower = -60;
    upper = 200;
    step = 20;

    celsius = lower;

    // additions to sample code start here
    printf("  C  |   F\n");
    printf("-----|------\n");
    // additions end here

    while (celsius <= upper)
    {
        fahr = (celsius / (5.0 / 9.0)) + 32.0;
        printf("%3.0f  |%6.1f\n", celsius, fahr);
        celsius = celsius + step;
    }
}

// Created a heading for the temperature converter
// Took the liberty of adding some other visuals as well