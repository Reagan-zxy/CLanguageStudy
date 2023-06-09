#include <stdio.h>


// 清空缓冲区 rewind(stdin)
int main()
{
    int i,ret;
    // mac 结束循环输入 使用 ctrl + d
    while (rewind(stdin), (ret=scanf("%d", &i))!=EOF  )  // while 是实现循环， 后面要有个括号
    {
        printf("i=%d\n", i);
    }
    

    

    return 0;
}