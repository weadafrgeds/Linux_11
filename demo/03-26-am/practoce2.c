#include <stdio.h>

int main()
{
    int year, month, day;
    int days = 0;

    printf("请输入 年 月 日：");
    scanf("%d %d %d", &year, &month, &day);

    switch (month - 1)
    {
    case 11:
        days += 30; // 11月
    case 10:
        days += 31; // 10月
    case 9:
        days += 30; // 9月
    case 8:
        days += 31; // 8月
    case 7:
        days += 31; // 7月
    case 6:
        days += 30; // 6月
    case 5:
        days += 31; // 5月
    case 4:
        days += 30; // 4月
    case 3:
        days += 31; // 3月
    case 2:
        days += 28; // 2月（平年）
    case 1:
        days += 31; // 1月
    case 0:
        days += day;
    }

    // 判断闰年：如果是闰年且月份>2，加1天
    if ((year % 4 == 0 && year % 100 != 0) || (year % 400 == 0))
    {
        if (month > 2)
        {
            days++;
        }
    }

    printf("这是第 %d 天\n", days);
    return 0;
}