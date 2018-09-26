#include <stdio.h> 

int main() 
{ 
    int n[10]; 
    int i; 
    int c = 1; 
    int k = 0; 
    for (i = 0; i < 10; i++) 
    { 
        scanf("%d \n", &n[i]); 
    } 

    for (i = 0; i < 9; i++) 
    { 
        if (n[i] == n[i + 1]) 
        { 
            c++; 
        } 
        else 
        { 
            if (c > k) 
            { 
                k = c; 
            } 
            c = 1; 
        } 
    } 
    if (c == 1 && k == 1) 
    { 
        c = 0; 
        k = 0; 
    } 
    if (c > k) 
    { 
        printf("%d", c); 
    } 
    else 
    { 
        printf("%d", k); 
    } 
    return 0; 
}
