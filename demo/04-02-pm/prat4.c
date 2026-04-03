#include <stdio.h>

double calcWater(double use);

int main()
{
    double use, fee;
    printf("请输入用水量(吨)：");
    scanf("%lf", &use);

    fee = calcWater(use);
    printf("总水费为：%.2f 元\n", fee);

    return 0;
}

// 计算水费函数
double calcWater(double use)
{
    double cost = 0;

    if (use <= 10)
    {
        cost = use * 2;
    }
    else if (use <= 20)
    {
        cost = 10 * 2 + (use - 10) * 3;
    }
    else
    {
        cost = 10 * 2 + 10 * 3 + (use - 20) * 5;
    }

    return cost;
}