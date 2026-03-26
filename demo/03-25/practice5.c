#include <stdio.h>

int main()
{
    // 生日：年 月 日
    int by, bm, bd;
    // 当前日期：年 月 日
    int cy, cm, cd;
    int age;

    printf("请输入生日（年 月 日）：");
    scanf("%d %d %d", &by, &bm, &bd);

    printf("请输入当前日期（年 月 日）：");
    scanf("%d %d %d", &cy, &cm, &cd);

    age = cy - by;

    if (cm < bm || (cm == bm && cd < bd))
    {
        age--;
    }

    printf("你的年龄是：%d 岁\n", age);

    return 0;
}