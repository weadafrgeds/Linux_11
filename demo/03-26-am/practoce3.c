#include <stdio.h>

int main()
{
    // 定义变量：选项、两个数字、结果
    int choice;
    float num1, num2, result;

    // 打印菜单
    printf("\n========== 四则运算菜单 ==========\n");
    printf("1. 加法\n");
    printf("2. 减法\n");
    printf("3. 乘法\n");
    printf("4. 除法\n");
    printf("0. 退出程序\n");
    printf("===================================\n");
    printf("请输入你的选择：");
    scanf("%d", &choice);
    // 输入两个数字
    printf("请输入第一个数字：");
    scanf("%f", &num1);
    printf("请输入第二个数字：");
    scanf("%f", &num2);

    // 判断选项
    switch (choice)
    {
    case 0:
        printf("程序已退出！\n");
        return 0; // 直接退出

    case 1:
        result = num1 + num2;
        printf("%.2f + %.2f = %.2f\n", num1, num2, result);
        break;
    case 2:
        result = num1 - num2;
        printf("%.2f - %.2f = %.2f\n", num1, num2, result);
        break;
    case 3:
        result = num1 * num2;
        printf("%.2f * %.2f = %.2f\n", num1, num2, result);
        break;
    case 4:
        // 除法：判断除数不能为0
        while (num2 == 0)
        {
            printf("除数不能为0\n请重新输入第二个数:");
            scanf("%f", &num2);
        }
        result = num1 / num2;
        printf("%.2f / %.2f = %.2f\n", num1, num2, result);
        break;

    default:
        // 无效选项，提示重新输入
        printf("输入无效！请重新选择菜单选项。\n");
        break;
    }
    return 0;
}