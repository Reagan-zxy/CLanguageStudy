#include <stdio.h>
#define N 5

int main()
{
    // 定义数组就是写一个变量名，后面加上方括号，方括号内写上整形变量
    // 定义数组的一瞬间，数组占据的空间大小就确定下来了
    int a[5] = { 1, 2, 3, 7, 8};
    int b[N] = { 1, 2, 3, 7, 8};

    printf("%lu\n", sizeof(a));

    

    int c = 10;
    int *p = &c;
    return 0;




}