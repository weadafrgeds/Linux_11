#include <stdio.h>
#include <math.h>
int main()
{
    int bin_num = 0;
    int bin_num_arr[8] = {0};
    int i = 0;
    int sum = 0;
    int count = 0;
    printf("请输入一个2进制的十进制数:");
    scanf("%d", &bin_num);

    while (bin_num != 0)
    {
        for (int i = 0; i < 7; i++)
        {
            bin_num_arr[i] = bin_num_arr[i + 1];
        }

        bin_num_arr[7] = bin_num % 10;
        bin_num /= 10;
    }
    for (int j = 0; j < 8; j++)
    {
        printf("%d ", bin_num_arr[j]);
    }
    printf("\n");
    int high = bin_num_arr[7] * 8 + bin_num_arr[6] * 4 + bin_num_arr[5] * 2 + bin_num_arr[4] * 1;
    // 低4位：bin[4]~bin[7]
    int low = bin_num_arr[3] * 8 + bin_num_arr[2] * 4 + bin_num_arr[1] * 2 + bin_num_arr[0] * 1;

    printf("对应的16进制：0x%X%X\n", high, low);

    return 0;
}