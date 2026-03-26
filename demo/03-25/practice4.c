#include <stdio.h>

int main()
{
    int month, days;

    printf("请输入月份：");
    scanf("%d", &month);

    // 31天的月份
    if (month == 1 || month == 3 || month == 5 || month == 7 || month == 8 || month == 10 || month == 12)
    {
        days = 31;
    }
    // 30天的月份
    else if (month == 4 || month == 6 || month == 9 || month == 11)
    {
        days = 30;
    }
    // 2月
    else if (month == 2)
    {
        days = 28;
    }
    // 无效月份
    else
    {
        printf("输入的月份无效！\n");
        return 0;
    }

    printf("%d 月有 %d 天\n", month, days);
    return 0;
}