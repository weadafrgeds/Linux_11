#include <stdio.h>
int main()
{
    int num = 0;
    float sum = 0;
    printf("请输入n的值：");
    scanf("%d", &num);
    for (int i = 1; i < num; i++)
    {
        sum += (1 / i);
    }
    printf("%f", sum);
}