#include <stdio.h>

int main()
{
   int a;
   scanf("%d", &a);
    for (int i = 2; i < a; i++)
    {
        if(SimpleNumber(i))
        {
            printf("%d\n", i);
        }
    
    }
    
       
   

return 0;
}




int SimpleNumber(int n)
{
    for (int i = 2; i <= sqrt(n); i++)
    
    if ((n % i) == 0)
        
    return 0;
        

return 1;
}
