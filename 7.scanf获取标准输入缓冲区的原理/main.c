#include <stdio.h>

// 缓冲区为空的时候，scanf才会阻塞
int main()
{
    int i,j;
    char c;

    scanf("%d", &i);
    printf("i=%d\n", i);

    // scanf("%c", &c);
    // printf("c=%c\n", c);

    scanf("%d", &j);
    printf("j=%d\n", j);

}