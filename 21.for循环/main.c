#include <stdio.h>

int main()
{
    int i,total;

    // 从 1 加到 100
    for (i = 1, total = 0; i <= 100; i++)
    {
        total = total + i;
    }
    printf("%d\n", total);

    // 100 以内奇数的和
    for (i = 0, total = 0; i <= 100; i++)
    {
        if (i%2 != 0)
        {
            total = total + i;
        }
    }
    printf("100以内奇数的和%d\n", total);

    // 100 以内奇数的和
    for (i = 0, total = 0; i <= 100; i++)
    {
        if (i%2 == 0)
        {
            continue;
        }
        total = total + i;

    }
    printf("100以内奇数的和%d\n", total);
}