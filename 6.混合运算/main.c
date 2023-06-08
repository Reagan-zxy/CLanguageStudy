#include <stdio.h>

int main()
{
    int i = 5;

    float j = i / 2;

    float k = (float) i/2;  // 强制转换类型 转换的是表达式

    printf("j = %f,  k = %f\n", j,k);

}