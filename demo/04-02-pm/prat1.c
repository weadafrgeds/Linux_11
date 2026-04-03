#include <stdio.h>

double yearInterest(double x, int y);

int main()
{
    double money, interest;
    int year;
    printf("请输入存款金额（元）：");
    scanf("%lf", &money);
    printf("请输入存款年限(1/2/3/5/8):");
    scanf("%d", &year);
    interest = yearInterest(money, year);
    printf("存款利息为：%.2f 元\n", interest);
    return 0;
}
double yearInterest(double money, int year)
{
    double rate;
    switch (year)
    {
    case 1:
        rate = 0.0063;
        break;
    case 2:
        rate = 0.0066;
        break;
    case 3:
        rate = 0.0069;
        break;
    case 5:
        rate = 0.0075;
        break;
    case 8:
        rate = 0.0084;
        break;
    default:
        printf("不支持该存款年限！\n");
        return 0.0;
    }

    // 利息 = 本金 × 月利率 × 12个月 × 年数
    return money * rate * 12 * year;
}