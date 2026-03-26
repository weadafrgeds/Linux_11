#include <stdio.h>

int main()
{
    int stations; // 站数
    float money;  // 费用
    int sections;
    printf("请输入乘坐站数：");
    scanf("%d", &stations);

    sections = (stations + 2) / 3;
    money = sections * 0.5;

    printf("费用为：%.1f 元\n", money);
    return 0;
}