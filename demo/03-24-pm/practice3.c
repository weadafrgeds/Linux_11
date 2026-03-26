/*******************************************************
> Copyright (C) 2026 ==IOT== All rights reserved.
> File Name: practice3.c
> Author: lv1
> Website:www.lv1.org
> Created Time: 2026年03月24日 星期二 02时18分28秒
***************************************************/

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>
int main(int argc, const char* argv[])
{
    int money =0;
    int year = 30;
    int periods = 0;
    double rate =0.032;
    double month_rate =0;
    double month_pay_f = 0 ,month_pay_t = 0;
    month_rate = rate/12;
    periods = year*12;
    printf("请输入贷款金额(万元):");
    scanf("%d",&money);
    month_pay_f = money*(month_rate*pow((1+month_rate),periods))/(pow(1+month_rate,periods)-1);
    month_pay_t =month_pay_f*10000;
    printf("月供为:%f元",month_pay_t);

    return 0;
}
