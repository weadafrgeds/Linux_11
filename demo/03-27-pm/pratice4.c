#include <stdio.h>
#include <math.h>
int main()
{
    int num1 = 0;
    int num2 = 0;

    int i = 0;
    int j = 0;

    int bit1 = 0;
    int bitNum1 = 0;

    int bit2 = 0;
    int bitNum2 = 0;

    printf("请输入一个数：");
    scanf("%d", &num1);
    num2 = num1;
    while (num1 != 0)
    {
        bit1 = num1 % 2;

        bitNum1 += bit1 * (int)powf(10, i++); // 1100100
        num1 /= 2;
    }
    printf("%d\n", bitNum1);

        while (num2 != 0)
    {
        bit2 = num2 % 8;

        bitNum2 += bit2 * (int)powf(10, j++); // 1100100
        num2 /= 8;
    }
    printf("%d\n", bitNum2);
    return 0;
}