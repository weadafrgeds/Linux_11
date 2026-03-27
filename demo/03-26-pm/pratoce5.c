#include <stdio.h>
#include <math.h>
int main()
{
    int num = 0;
    int sum = 0;
    printf("请输入n的值:");
    scanf("%d", &num);
    for (int i = 1; pow(i, 2) < num; i++)
    {
        sum = sum + pow(i, 2);
    }
    printf("sum =%d", sum);
}