#include <stdio.h>

int main()
{
    int i,total;

    for (i = 1, total = 0; i <= 100; i++)
    {
        total = total + i;
    }

    printf("%d\n", total);
}