#include <stdio.h>

int main()
{
    int mainChoice;
    int subChoice;
    float a, b, res;

    printf("1. 进入运算\n");
    printf("0. 退出\n");
    printf("请选择：");
    scanf("%d", &mainChoice);

    if (mainChoice == 0)
    {
        printf("退出成功！\n");
        exit(0);
    }
    else if (mainChoice != 1)
    {
        printf("输入错误！\n");
        exit(0);
    }

    printf("\n===== 运算菜单 =====\n");
    printf("1. 加法\n");
    printf("2. 减法\n");
    printf("3. 乘法\n");
    printf("4. 除法\n");
    printf("请选择运算：");
    scanf("%d", &subChoice);

    // 输入两个数
    printf("输入两个数：");
    scanf("%f%f", &a, &b);

    // 计算
    switch (subChoice)
    {
    case 1:
        res = a + b;
        printf("和=%.2f\n", res);
        break;
    case 2:
        res = a - b;
        printf("差=%.2f\n", res);
        break;
    case 3:
        res = a * b;
        printf("积=%.2f\n", res);
        break;
    case 4:
        while (b == 0)
        {
            printf("除数不能为0!\n重新输入:");
            scanf("%f", &b);
        }
        res = a / b;
        printf("商=%.2f\n", res);
        break;
    default:
        printf("无效运算！\n");
    }
    return 0;
}