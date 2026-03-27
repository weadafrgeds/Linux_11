#include <stdio.h>
int main()
{
    int num = 0;
    float sum = 0;
    printf("请输入n的值:");
    scanf("%d", &num);
    for (int i = 2; 1; i++)
    {
        if ((1 / (i * (i + 1))) < 0.00001)
            break;
        sum += (1 / (i * (i + 1)));
    }
    sum += 1;
    printf("sum=%f", sum);
}