#include <stdio.h>
int main()
{

    int year, month, day;
    int days = 0; // 总天数
    int month_days[] = {31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31};

    printf("请输入 年 月 日：");
    scanf("%d %d %d", &year, &month, &day);

    // 1. 累加前面月份的天数
    for (int i = 0; i < month - 1; i++)
    {
        days += month_days[i];
    }
    // 2. 加上日期
    days += day;

    // 3. 判断闰年：如果是闰年且月份>2，加1天
    if ((year % 4 == 0 && year % 100 != 0) || (year % 400 == 0))
    {
        if (month > 2)
        {
            days += 1;
        }
    }

    printf("这是第 %d 天\n", days);
    return 0;
}