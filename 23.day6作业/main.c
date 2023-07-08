#include <stdio.h>

int main()
{
    int a;  // 输入的值
    int ret, b, tmp;
    int target; // 用来暂存输入的值

    while (rewind(stdin), ( ret=scanf("%d", &a) ) != EOF )
    {
        b = 0;
        target = a;
        while ( a!=0 )
        {
            tmp = a % 10;
            b = b * 10 + tmp;
            a = a / 10;
        }
        printf("%d\n", b);
        if (b == target)
        {
            printf("%d是对称数\n", target);
        }
        else {
            printf("%d不是对称数\n", target);
        }
        
    }
    
}