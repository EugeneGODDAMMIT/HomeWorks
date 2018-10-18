#include <stdio.h>

int main()
{
    long nc = 0;
    long nb = 0;
    long nd = 0;
    int c;
    while ((c = getchar()) != EOF)
    {
        if (c == '\n')
        {
            ++nc;
        }
        else if (c == '\t')
        {
            ++nd;
        }
        else if (c == ' ')
        {
            ++nb;
        }
    }
    printf(" Новые строки -  %d\n Табуляции - %d\n Пробелы - %d\n", nc, nd, nb);
    return 0;
}
