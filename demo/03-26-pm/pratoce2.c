#include <stdio.h>
int main()
{
    int num = 0;
    float sum = 0;
    printf("请输入n的值:");
    scanf("%d", &num);
    for (int i = 1; i < num; i++)
    {
        if (i % 2 == 1)
        {
            sum -= (1 / i);
        }
        else
        {
            sum += (1 / i);
        }
    }
    printf("sum=%f", sum);
}