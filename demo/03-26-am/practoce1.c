#include <stdio.h>
// #define MAX(a, b, c) ((a) > (b) ? ((a) > (c) ? (a) : (c)) : ((b) > (c) ? (b) : (c)))
int main()
{
    int side1 = 0;
    int side2 = 0;
    int side3 = 0;
    // int side_max = 0;
    printf("请输入三角形的三条边：");
    scanf("%d %d %d", &side1, &side2, &side3);
    if (side1 + side2 > side3 && side1 + side3 > side2 && side2 + side3 > side1)
    {
        if (side1 == side2 == side3)
        {
            printf("该三角形为等边三角形");
        }
        else if (side1 == side2 || side1 == side3 || side2 == side3)
        {
            printf("该三角形为等腰三角形");
        }
        else if (side1 + side2 == side3 || side1 + side3 == side2 || side3 + side2 == side1)
        {
            printf("该三角形为直角三角形");
        }
        else
        {
            printf("该三角形为普通三角形");
        }
    }
    return 0;
}