/*******************************************************
> Copyright (C) 2026 ==IOT== All rights reserved.
> File Name: practice1.c
> Author: lv1
> Website:www.lv1.org
> Created Time: 2026年03月24日 星期二 01时18分36秒
***************************************************/

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>

int main(int argc, const char* argv[])
{
    int money = 0; //存款金额
    int year = 0; //存期
    float rate = 0;//年利率
    float interest = 0;//利息
    printf("请输入本金，存期，年利率：");
        scanf("%d %d %f",&money,&year,&rate);
    interest = (money*pow((1+rate),year))-money;
    printf("利息为:%.2f\n",interest);
    return 0;
}
