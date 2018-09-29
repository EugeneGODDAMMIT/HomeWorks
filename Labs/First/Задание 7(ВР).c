// Автор Валерия Решетникова
// https://vk.com/leriya.resh
#include <stdio.h> 

int main() 
{ 
    int N, a, b, max=0; 
    int i;
    printf(" Введите натуральное число: "); 
    scanf("%d", &N ); 

    for (int i=2; i <= N; i++) 
        for (int j=2; j < i; j++) 
        { 
            if (i % j == 0) 
            break; 
            else if (i == j+1) 

            { 
                a = i; 
                b = 0; 

                while (a != 0) 
                { 
                    b = b*10 + a%10; 
                    a /= 10; 
                } 

            if (i == b) 
            max = i; 
            } 

        } 

    if (N <= 3 && N > 1) 
    printf(" Наибольший простой палиндром: 2\n"); 
    else if (N > 1) 
    printf(" Наибольший простой палиндром: %d", max); 
    else printf(" Нет простых чисел"); 

return 0; 
} 