/* Используя Булевый инклуд и сдвиг по байтам из-за деления на 2.
   Ваще топово конечно, но фак, через рекурсию надо было, Алексей Дмитриевич не бейте >_<
*/
#include <stdio.h>
#include <stdbool.h>

int main()
{
    int n;
    scanf("%d", &n);
    int x = 1;
    bool decreased = false;
    for (;;) 
    {
    	int nx = (x + n / x) >> 1;
    	if (x == nx || nx > x && decreased)  break;
    	    decreased = nx < x;
    	x = nx;
    }
    printf("%d\n", x);

    return 0;
}
