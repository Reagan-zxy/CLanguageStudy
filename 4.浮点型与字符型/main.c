#include <stdio.h>

int main()
{
    
    float f = 1.234;  // 浮点型占用 4 个字节
    float f2 = 3e-2;  //e代表10的幂次
    printf("%f\n", f);  // %f 以浮点型输出数据
    printf("%f\n", f2);

    char c = 'a';  // 定义一个字符变量,赋值为 'a' // 一个字符占用 1 个字节 
    printf("%c\n", c);

    


    return 0;
}
