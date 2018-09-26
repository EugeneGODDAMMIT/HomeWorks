#include <stdio.h>

int main()
{

    int a [20];

    a [0] = 1;

    a [1] = 1;

    int i;

    for (i=1; i<20; i=i+1)
    {

        a[i+1]=a[i]+a[i-1];

    }
    for (i=0; i<20; i=i+1)
    {

    printf("%d\n", a[i]);

    }

}

