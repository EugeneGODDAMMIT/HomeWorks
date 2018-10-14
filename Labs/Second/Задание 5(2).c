#include <stdio.h> 

int main() { 
    float x; 
    int y; 
    float p; 

    float ex(float a, int b) { 
        if (b == 0) { 
            return 1; 
        } 
        else { 
            return a*ex(a, b-1); 
        } 
    } 
    scanf("%f", &x); 
    scanf("%d", &y); 

    p = ex(x, y); 
    printf("%f", p); 

} 