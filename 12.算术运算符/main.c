#include <stdio.h>

int main()
{
    int a = 4 + 5 * 2 - 6 / 3 + 11 % 4;
    printf("%d\n", a);

    scanf("%d", &a);
    // printf("%d%d%d%d\n", a%10, (a/10)%10, (a/100)%10, (a/1000)%10);
    while (a != 0) // 当A不为0时就可以执行循环语句
    {
        printf("%d", a%10);
        a = a /10;
    }
    printf("\n");
    

    return 0;
}