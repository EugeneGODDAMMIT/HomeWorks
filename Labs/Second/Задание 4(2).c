#include <stdio.h>


int Sum(int a, int b)
{
    if (a!= 0)
    {
        return Sum(a / 10, b + a % 10);
    }
    else
    {
        return b;
    }
}
int main()
{
    int c = 0;
    c = Sum (56,0);
    printf("%d\n", c);
    
    return 0;
}