#include <stdio.h>
#include <time.h>
#include <stdlib.h>
#include <math.h>
int main()
{
    int arr[10] = {0};
    int prime_arr[10] = {0};
    int prm_fg = 0;
    srand(time(NULL));
    int val = 0;
    int k = 0;
    int min = 0;
    // 原数组
    for (int i = 0; i < 10; i++)
    {
        arr[i] = rand() % 100;
    }
    printf("原数组:\n");
    for (int i = 0; i < 10; i++)
    {
        printf("%d ", arr[i]);
    }
    // 找数组中的素数
    for (int i = 0; i < 10; i++)
    {
        val = arr[i];
        if (val < 2)
        {
            continue;
        }
        for (int j = 2; j <= sqrt(val); j++)
        {
            if (val % j == 0)
            {
                prm_fg = 1;
                break;
            }
        }
        if (prm_fg == 0)
        {
            prime_arr[k++] = val;
        }
        else
        {
            prm_fg = 0;
        }
    }
    // 插入排序
    for (int i = 1; i < k; i++)
    {
        min = arr[i];
        int j = i - 1;
        for (; j >= 0; j--)
        {
            if (min < arr[j])
            {
                arr[j + 1] = arr[j];
            }
            else
                break;
        }
        arr[j + 1] = min;
    }
    // 排序后数组
    printf("排序后数组:\n");
    for (int i = 0; i < k; i++)
    {
        printf("%d ", prime_arr[i]);
    }
    printf("\n");
    return 0;
}