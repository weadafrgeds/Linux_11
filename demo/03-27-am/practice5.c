#include <stdio.h>
#include <math.h>
int main()
{

    int num1 = 0;
    int num2 = 0;
    printf("请输入两个数");
    scanf("%d %d", &num1, &num2);
    int max = (num1 > num2) ? (num1) : (num2);
    int sum = num1 + num2;
    int min = sum - max;
    int gcd = 0;
    int lcm = 0;
    for (int i = min; i > 0; i--)
    {
        if (max % i == 0)
        {
            printf("最大公约数为：%d\n", i);
            gcd = i;
            break;
        }
    }
    int prodt = max * min;
    lcm = (max * min) / gcd;
    printf("最小公倍数为：%d\n", lcm);
    return 0;
}
