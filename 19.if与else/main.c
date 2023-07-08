#include <stdio.h>

int main()
{
    int a,ret;

    while (rewind(stdin), (ret=scanf("%d", &a))!=EOF )
    {
        if (a > 0)
        {
            printf("a is bigger than 0\n");
        }
        else{
            printf("a is not bigger than 0\n");
        }
        
        
    }
    
}