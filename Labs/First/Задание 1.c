#include <stdio.h>

 int main () 
{
    int x;
    int c1 = 0;
    int c2 = 0;
    printf ("Enter a number\n");
    scanf ("%d", &x);
    c1 = 2 * x + 3;
    if (c1 < 0)
    {
        c2 = c1 * (-1);
    }
    c2 = c1;
    c2 = c2 - 1;
    if (c2 < 0)
    {
     c2 * (-1);
    }
    printf ("%d", c2);
}


