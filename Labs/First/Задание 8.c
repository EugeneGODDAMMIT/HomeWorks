
#include <stdio.h>


int main (){
 
 float a, b, c;

    a = 1;

    b = -1;

    c = -6;

    float d;

    d= b * b - 4 * a * c;

    float x1, x2;

    x1 = (-b + sqrt(d)) / ( 2 * a);

    x2 = (-b - sqrt(d)) / ( 2 * a);

    printf("x1 = %0.0f; x2 = %0.0f", x1, x2);

    
}
