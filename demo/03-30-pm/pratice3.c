#include <stdio.h>
#include <math.h>
int main()
{
    int bin_num = 0;
    int i = 0;
    int bin_arr[20] = {0};
    int len = 0;
    int sum = 0;
    int k = 0;
    int rest[20] = {0};
    int m = 0;
    int temp = 0;
    printf("请输入要转换的数：");
    scanf("%d", &bin_num);
    while (bin_num != 0)
    {
        bin_arr[i++] = bin_num % 10;
        bin_num /= 10;
    }
    len = i;
    for (int j = 0; j < len; j++)
    {
        sum += bin_arr[j] * (int)powf(2, k++);
        if (k % 3 == 0 || j == len - 1)
        {
            k = 0;
            rest[m] = sum;
            sum = 0;
            m++;
        }
    }
    for (int i = 0; i < m / 2; i++)
    {
        temp = rest[i];
        rest[i] = rest[m - i - 1];
        rest[m - i - 1] = temp;
    }
    printf("0D");
    for (int i = 0; i < m; i++)
    {
        printf("%d", rest[i]);
    }
    printf("\n");
    return 0;
}