#include <stdio.h>

int func (char x[100], char y[100])
{
    int count = 0;
    for (int i = 0; i < 100; i++)
    {
        if (x[i] != y[i])
        {
            count++;
        }
        
    }
    return count;
}

int main()
{
    char a[100];
    char b[100];
    scanf("%s", a);
    scanf("%s", b);
    int c = 0;
    c = func(a , b);
    printf("%d\n", c);
    return 0;
}
