#include <stdio.h>

int main()
{
    char c = 0;
    char i = 0;
    int p = 0;
    while ((c = getchar()) != EOF)
    {
        if (c == ' ')
        {
            p++;
        }
        else
        {
            p = 0;
        }
        if (p <= 1)
        {
            putchar(c);
        }
    }
    printf("%d\n", c);
    return 0;
}
