#include <stdio.h>
#include <math.h>
int main()
{
    int num1 = 0;
    int num2 = 1;
    double sum = 0;
    printf("请输入n的值:");
    // scanf("%d", &num);
    for (int i = 1; i < 16; i++)
    {
        num2 += num1;
        sum = sum + (num2 / num1);
        num1 = i;
    }
    printf("sum =%f", sum);
}