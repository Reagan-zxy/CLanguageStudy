#include <stdio.h>

// 一个scanf读多种类型的数据
// 混合输入时每次在%c之前需要加入一个空格
int main()
{
    int i;
    char c;
    float f;
    scanf("%d %c%f", &i, &c, &f);
    printf("i = %d, c = %c, f = %f\n", i, c, f);

    return 0;
}