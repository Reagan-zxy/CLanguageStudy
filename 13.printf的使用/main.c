#include <stdio.h>

int main()
{
    printf("name=%s, age=%d, sex=%c, score=%5.2f\n", "zhangxiongyan", 23, 'm', 98.5);

    //day5作业
    int i;
    char j;
    float k;

    scanf("%d", &i);
    scanf(" %c", &j);
    scanf("%f", &k);

    printf("%.2f\n", i+j+k);

}