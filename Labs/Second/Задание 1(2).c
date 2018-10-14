#include <stdio.h> 




    float add(float a, float b) { 
    return a+b; 
    } 
    float dif(float a, float b) { 
    return a-b; 
    } 
    float mul(float a, float b) { 
    return a*b; 
    } 
    float divi(float a, float b) { 
    return a/b; 
    } 
    float mod(float a) { 
    if (a>=0) 
    return a; 
    else 
    return -a; 
    } 
    int ex(int a, int b) { 
    if (b == 0) { 
    return 1; 
    } 
    else { 
    return a*ex(a, b-1); 
    } 
    } 
    float expo(int a, int b) { 
    return 1/ex(a,b); 
    } 

int main() 
{ 
    float a = ex(3,7);
    float b = dif(2,5);
    float c = (0.3*21) - ex(2,6);
    c = mod(c);
    c = ex(c,2);
    float d = expo(-3,-2);
    d = 1/d;
    float f = c+d;
    printf("%f\n", f);
    return 0;
}



