#include <stdio.h>

int main()
{
    int lower, upper ,step;
    float fahr, celsius;
    lower = 0;
    upper = 300;
    step = 1;
    fahr = lower;
    while (fahr <= upper)
    {
        celsius = (5.0 / 9.0) * (fahr -32.0);
        printf("%2.0f %6.1f\n", fahr, celsius);
        fahr += step;
    }

    return 0;
}
