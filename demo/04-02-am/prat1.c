#include <stdio.h>
#include <stdlib.h>

float add(float x, float y);      // 加法
float sub(float x, float y);      // 减法
float mul(float x, float y);      // 乘法
float division(float x, float y); // 除法
float factorial(float x);         // 阶乘
float xp(float x, float y);       // 幂
void calculate();                 // 计算

int main()
{
    while (1)
    {
        calculate();
    }
    return 0;
}

float add(float x, float y)
{
    return x + y;
}

float sub(float x, float y)
{
    return x - y;
}

float mul(float x, float y)
{
    return x * y;
}

float division(float x, float y)
{
    return x / y;
}

float factorial(float x)
{
    float rev = 1;
    for (int i = 1; i <= x; i++)
    {
        rev *= i;
    }

    return rev;
}

float xp(float x, float y)
{
    float rev = 1;
    for (int i = 1; i <= y; i++)
    {
        rev *= x;
    }
    return rev;
}

void calculate()
{
    int choice;
    float num1, num2, result;
    printf("\n========== 运算菜单 ==========\n");
    printf("1. 加法\n");
    printf("2. 减法\n");
    printf("3. 乘法\n");
    printf("4. 除法\n");
    printf("5. 阶乘\n");
    printf("6. 幂运算\n");
    printf("0. 退出程序\n");
    printf("请输入你的选择：");
    scanf("%d", &choice);
    switch (choice)
    {
    case 0:
        printf("程序已退出！\n");
        exit(0); // 直接退出

    case 1:
        printf("请输入第一个数字：");
        scanf("%f", &num1);
        printf("请输入第二个数字：");
        scanf("%f", &num2);
        result = add(num1, num2);
        printf("%.2f + %.2f = %.2f\n", num1, num2, result);
        break;
    case 2:
        printf("请输入第一个数字：");
        scanf("%f", &num1);
        printf("请输入第二个数字：");
        scanf("%f", &num2);
        result = sub(num1, num2);
        printf("%.2f - %.2f = %.2f\n", num1, num2, result);
        break;
    case 3:
        printf("请输入第一个数字：");
        scanf("%f", &num1);
        printf("请输入第二个数字：");
        scanf("%f", &num2);
        result = mul(num1, num2);
        printf("%.2f * %.2f = %.2f\n", num1, num2, result);
        break;
    case 4:
        printf("请输入第一个数字：");
        scanf("%f", &num1);
        printf("请输入第二个数字：");
        scanf("%f", &num2);
        // 除法：判断除数不能为0
        while (num2 == 0)
        {
            printf("除数不能为0\n请重新输入第二个数:");
            scanf("%f", &num2);
        }
        result = division(num1, num2);
        printf("%.2f / %.2f = %.2f\n", num1, num2, result);
        break;
    case 5:
        printf("请输入第一个数字：");
        scanf("%f", &num1);
        result = factorial(num1);
        printf("%.2f * %.2f = %.2f\n", num1, num2, result);
        break;
    case 6:
        printf("请输入第一个数字：");
        scanf("%f", &num1);
        printf("请输入第二个数字：");
        scanf("%f", &num2);
        result = xp(num1, num2);
        printf("%.2f * %.2f = %.2f\n", num1, num2, result);
        break;
    default:
        // 无效选项，提示重新输入
        printf("输入无效！请重新选择菜单选项。\n");
        break;
    }
}