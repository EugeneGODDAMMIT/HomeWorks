#include <stdio.h>

int main()
{

    int x;
    int a = 0;
    int sum = 0;
    scanf("%d", &x);
    while (x != 0)
    {
        a = x % 10;
        sum += a;
        x /= 10;
    }
    printf("%d\n", sum);
}

