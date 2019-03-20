
// Matthew Harker
// Chapter 1 Exercise 4

#include <stdio.h>

int main()
{
    float fahr, celsius;
    int lower, upper, step;

    lower = -60;
    upper = 200;
    step = 20;

    celsius = lower;

    printf("  C  |   F\n");
    printf("-----|------\n");

    while (celsius <= upper)
    {
        fahr = (celsius / (5.0 / 9.0)) + 32.0;
        printf("%3.0f  |%6.1f\n", celsius, fahr);
        celsius = celsius + step;
    }
}

// The process to convert C to F is slightly different, but not major