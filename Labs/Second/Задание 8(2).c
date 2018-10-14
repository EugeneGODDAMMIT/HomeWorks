// by Eugene Shevchugov https://vk.com/lakadmatataaag
#include <stdio.h>

int Tower (int n, int first, int last)
{
    if (n == 1)
    {
        printf("%d - > %d\n", first , last);
    }
    else
    {
        Tower(n-1,first,6-first-last);
        printf("%d - > %d\n", first, last);
        Tower(n-1,6-first-last,last);

    }
}

int main()
{
    Tower(3,1,2);
    return 0;
}
