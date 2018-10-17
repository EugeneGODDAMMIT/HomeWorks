#include <stdio.h>


int Fibona4idruguda4i(int n)
{
    if (n == 0)
    {
        return 0;
    }
    else if (n == 1 || n == 2)
    {
        return 1;
    }
    else
    {
        return Fibona4idruguda4i(n-1) + Fibona4idruguda4i(n-2);
    }
}

int main()
{
    int n = 0;
    scanf("%d", &n);
    printf("%d\n", Fibona4idruguda4i(n));
    return 0;
}