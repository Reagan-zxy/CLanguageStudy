#include <stdio.h>


// i++ 代表的是 i = i + 1
// i-- 是按优先级进行正常运算
int main()
{
    int i = -1;
    int j;

    j = i++ > -1;  // 拆成两步， j = i > -1 , i++

    printf("i=%d, j=%d\n", i,j); 
    printf("i的字节数= %lu\n", sizeof(i));

}