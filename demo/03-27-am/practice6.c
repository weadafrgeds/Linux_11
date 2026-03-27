#include <stdio.h>
#include <math.h>
int main()
{
    int num = 0;
    int sum2 = 0;
    printf("请输入一个数:");
    scanf("%d", &num);

    for (int i = 1; i <= num; i++)
    {
        int sum1 = 1;
        for (int j = 1; j <= i; j++)
        {
            sum1 *= j;
        }
        sum2 += sum1;
    }
    printf("%d阶乘的和:%d\n", num, sum2);
    return 0;
}
