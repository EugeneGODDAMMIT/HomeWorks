#include<stdio.h> 

int main() 
{ 
    int first = 0; 
    int last = 0; 
    int a = 0; 
    int b = 0; 
    int i = 0; 
    int c = 0;
    int zeros = 1; 
    scanf("%d\n", &a); 
    i = a; 
    while (i != 0) 
    { 
        b++; 
        i = i / 10; 
    } 
    for (c = 1; c < b; c++) 
    { 
        zeros = zeros*10; 
    } 

    while (zeros != 0 && first == last) 
    { 

        first = 0; 
        first = a / zeros; 
        first = first % 10; 
        last = 0; 
        last = last + a % 10; 

        a = a / 10; 
        zeros = zeros / 100; 

    } 
    if (first == last) 
    { 
        printf("True\n"); 
    } 
    else 
    { 
    printf("False\n"); 
    exit(1); 
    } 




return 0; 
}