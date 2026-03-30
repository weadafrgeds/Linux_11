#include <stdio.h>
void right_triangle();              // 直角三角形
void flip_the_triangle();           // 翻转三角形
void acute_angled_right_triangle(); // 带空格直角三角
void pyramid();                     // 金子塔
void rhombus();                     // 菱形
void k_shaped_graph();              // K形图
void arrows();                      // 箭头
void sand_clock();                  // 打印沙漏图形

int main()
{
    int row = 0;
    printf("请输入你想要的行数：");
    scanf("%d", &row);

    right_triangle(row);
    printf("\n");
    flip_the_triangle(row);
    printf("\n");
    acute_angled_right_triangle(row);
    printf("\n");
    pyramid(row);
    printf("\n");
    rhombus(row);
    printf("\n");
    k_shaped_graph(row);
    printf("\n");
    arrows(row);
    printf("\n");
    sand_clock(row);
    return 0;
}

void right_triangle(int a) // 直角三角形
{
    for (int i = 1; i <= a; i++) // 行
    {
        for (int j = 1; j <= i; j++) // 列
        {
            printf("*");
        }
        printf("\n");
    }
}
void flip_the_triangle(int a) // 翻转三角形
{
    for (int i = 1; i <= a; i++) // 行
    {
        for (int j = a; j >= i; j--) // 列
        {
            printf("*");
        }
        printf("\n");
    }
}
void acute_angled_right_triangle(int a) // 带空格直角三角
{
    for (int i = 1; i <= a; i++) // 行
    {
        for (int k = 1; k <= a - i; k++) // 列
        {
            printf(" ");
        }

        for (int j = 1; j <= i; j++) // 列
        {
            printf("*");
        }
        printf("\n");
    }
}
void pyramid(int a) // 金子塔
{
    for (int i = 1; i <= a; i++) // 行
    {
        for (int k = 1; k <= a - i; k++) // 列
        {
            printf(" ");
        }

        for (int j = 1; j <= (2 * i - 1); j++) // 列
        {
            printf("*");
        }
        printf("\n");
    }
}
void rhombus(int a) // 菱形
{
    for (int i = 1; i <= a; i++) // 行
    {
        for (int k = 1; k <= a - i; k++) // 列
        {
            printf(" ");
        }

        for (int j = 1; j <= (2 * i - 1); j++) // 列
        {
            printf("*");
        }
        printf("\n");
    }

    for (int i = 1; i <= a - 1; i++) // 行
    {
        for (int k = 1; k <= i; k++) // 列
        {
            printf(" ");
        }
        for (int j = 1; j <= 2 * (a - i) - 1; j++) // 列
        {
            printf("*");
        }
        printf("\n");
    }
}
void k_shaped_graph(int a) // K形图
{
    for (int i = 1; i <= a; i++) // 上半
    {
        for (int j = 0; j <= a - i; j++) // 列
        {
            printf("*");
        }
        printf("\n");
    }

    for (int i = 2; i <= a; i++) // 下半
    {
        for (int j = 1; j <= i; j++) // 列
        {
            printf("*");
        }
        printf("\n");
    }
}
void arrows(int a) // 箭头
{
    for (int i = 1; i <= a; i++) // 上半
    {
        for (int k = 1; k <= (a * 2) - (2 * i); k++) // 空格
        {
            printf(" ");
        }

        for (int j = 1; j <= i; j++) // *
        {
            printf("*");
        }
        printf("\n");
    }

    for (int i = 1; i <= a - 1; i++) // 下半
    {
        for (int k = 1; k <= (2 * i); k++) // 空格
        {
            printf(" ");
        }

        for (int j = 1; j <= a - i; j++) // *
        {
            printf("*");
        }
        printf("\n");
    }
}
void sand_clock(int a) // 打印沙漏图形
{

    for (int i = 1; i <= a; i++) // 行
    {
        for (int k = 1; k <= i; k++) // 列
        {
            printf(" ");
        }

        for (int j = 1; j <= (a * 2) - ((2 * i) - 1); j++) // 列
        {
            printf("*");
        }
        printf("\n");
    }
    for (int i = 1; i <= a - 1; i++) // 行
    {
        for (int k = 1; k <= a - i; k++) // 列
        {
            printf(" ");
        }

        for (int j = 1; j <= (2 * i) + 1; j++) // 列
        {
            printf("*");
        }
        printf("\n");
    }
}
