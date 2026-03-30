#include <stdio.h>
#include <math.h>
int main()
{
    int num = 0;
    int i = 0;
    int bit = 0;
    int bitNum = 0;
    printf("请输入一个数：");
    scanf("%d", &num);
    while (num != 0)
    {
        bit = num % 8;

        bitNum += bit * (int)powf(10, i++); // 1100100
        num /= 8;
    }
    printf("%d\n", bitNum);
    return 0;
}