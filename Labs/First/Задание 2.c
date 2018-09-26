#include <stdio.h>

 int main () 
{
    int x;
    int k;
    scanf("%d", &x);
    if (x < 0)
    {
        k = 2 * (x*x) - 1;
    }
    else if (x > 10)
    {
        k = x - 7;
    }
    else
    {
        k = x*x*x;
    }
    printf("%d", k);
}


