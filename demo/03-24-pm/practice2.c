/*******************************************************
> Copyright (C) 2026 ==IOT== All rights reserved.
> File Name: practice2.c
> Author: lv1
> Website:www.lv1.org
> Created Time: 2026年03月24日 星期二 01时39分19秒
***************************************************/

#include <stdio.h>
#include <stdlib.h>
#include <string.h>


int main(int argc, const char* argv[])
{
    int money = 10000;
    
    float rate = 0;
    double interest = 0,interest1= 0,interest2= 0,interest3= 0;

    
    printf("请输入年利率:");
    scanf("%f",&rate);

    interest1=money*rate;
    interest2=(money*2+interest1)*rate;
    interest3=(money*3+interest2)*rate;
    interest=interest1+interest2+interest3;
    printf("总利息为%f \n",interest);


    return 0;
}
