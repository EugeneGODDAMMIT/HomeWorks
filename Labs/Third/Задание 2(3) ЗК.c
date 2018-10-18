#include<stdio.h>

int main(){
    int n;
    scanf("%d", &n);
    int m[n][n];
    int b[n];
    for(int i = 0; i < n; i++)
    {
        for(int j = 0; j < n; j++ )
        {
            scanf("%d",&m[i][j], i);
        }
    }
    for( int i = 0; i < n; i++ )
    {
        for( int j = 0; j < n; j++)
        {
            b[j] = 0;
        }
        
        for( int j = 0; j < n; j++)
        {
            b[m[i][j]] += 1;
        }
    }
    char all = 1;
    for(int j = 0; j < n; j++ )
    {
        if (b[j] != 1)
        {
            all = 0;
        }
        else
        {
            all = 1;
        }
    }
    if (all == 1 ) printf("Все разные");
    else printf("Все равны");
    return 0;
}