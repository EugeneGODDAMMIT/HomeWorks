#include <stdio.h>

int main()
{
    int flag = 0;
    int c1, c2;
    c1 = getchar();
    while (c1 != EOF)
    {
        c2 = getchar(); 
        if (flag == 0) 
            if ((c1 == '/') && (c2 == '/')) 
            flag = 1; 
            else if ((c1 == '/') && (c2 == '*')) 
            {
                
                flag = 2;
                c2 = getchar();
                
            } 
            else putchar(c1); 
        else if ((flag == 1) && (c2 == '\n')) 
        {
            flag = 0;
        }
        else if ((flag == 2) && (c1 == '*') && (c2 == '/')) 
        {
            flag = 0;
            c2 = getchar();
            
        } 
        c1 = c2;
    }

    return 0;
}
