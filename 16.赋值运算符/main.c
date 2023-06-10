#include <stdio.h>

// 赋值运算符的左边只能放变量
int main()
{
    int a = 5;

    a = a + 3;

    printf("%d\n", a);


    // a + 3 = 10; // 如果报出操作数必须为左值，这时说明等号左边必须是变量；


}