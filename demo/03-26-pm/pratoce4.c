#include <stdio.h>
int main()
{
    int num = 0;
    int sum = 0;
    printf("请输入n的值:");
    scanf("%d", &num);
    for (int i = 0; i < num; i++)
    {
        if (i % 2 == 0)
        {
            printf("%d", i);
        }
    }
}