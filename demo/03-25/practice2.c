#include <stdio.h>

int main()
{
    int km;
    printf("请输入公里数：");
    scanf("%d", &km);

    int price;

    if (km >= 0 && km <= 6)
    {
        price = 2;
    }
    else if (km <= 10)
    {
        price = 3;
    }
    else if (km <= 14)
    {
        price = 4;
    }
    else if (km <= 20)
    {
        price = 5;
    }
    else
    {
        printf("超出范围！\n");
        return 1;
    }

    printf("票价：%d 元\n", price);
    return 0;
}