#include <stdio.h>

int main()
{
    int a = 18;

    if (a>3 && a<10)
    {
        printf("it is right\n");
    }
    else {
        printf("it is not right\n");
    }

    // 判断两个浮点数是否相等
    float f = 234.56;
    if ( f-234.56>-1e4 && f-234.56<1e4)
    {
        printf("is equal\n");
    }
    else {
        printf("is not equal\n");
    }
    
    

}