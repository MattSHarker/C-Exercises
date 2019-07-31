
// Matthew Harker
// Chapter 1 Exercise 4

#include <stdio.h>

float ctof(float cel);

int main()
{
    float fahr, cel;
    int lower, upper, step;

    lower = -60;
    upper = 200;
    step = 20;

    cel = lower;

    printf("  C  |   F\n");
    printf("-----|------\n");

    while (cel <= upper)
    {
        fahr = ctof(cel);
        printf("%3.0f  |%6.1f\n", cel, fahr);
        cel = cel + step;
    }

    return 0;
}

/**
 * @brief Converts celsius to fahrenheit
 * 
 * @param cel       The temperature in celsius
 * @return float    The celsius temperature converted to fahrenheit
 */
float ctof(float cel)
{
    return (cel / (5.0/9.0)) + 32.0;
}


// This is the same as exercise 1-4, but the process of converting the temperature
// has been put into its own function
