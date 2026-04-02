#include <stdio.h>
#include <time.h>
#include <stdlib.h>
#include <math.h>
int main()
{
    int arr1[10] = {0};
    int arr2[5] = {0};
    int min = 0;

    // 原数组
    for (int i = 0; i < 5; i++)
    {
        arr1[i] = rand() % 100;
        arr2[i] = rand() % 100;
    }
    printf("原数组1:");
    for (int i = 0; i < 5; i++)
    {
        printf("%d ", arr1[i]);
    }
    printf("\n原数组2:");
    for (int i = 0; i < 5; i++)
    {
        printf("%d ", arr2[i]);
    }
    // 插入排序数组1
    for (int i = 1; i < 5; i++)
    {
        min = arr1[i];
        int j = i - 1;
        for (; j >= 0; j--)
        {
            if (min < arr1[j])
            {
                arr1[j + 1] = arr1[j];
            }
            else
                break;
        }
        arr1[j + 1] = min;
    }
    // 插入排序数组2
    for (int i = 1; i < 5; i++)
    {
        min = arr2[i];
        int j = i - 1;
        for (; j >= 0; j--)
        {
            if (min < arr2[j])
            {
                arr2[j + 1] = arr2[j];
            }
            else
                break;
        }
        arr2[j + 1] = min;
    }
    // 将数组2按大小插入数组1
    for (int i = 0; i < 5; i++)
    {
        min = arr2[i];
        int j = 5 + i - 1;

        while (j > 0 && min < arr1[j])
        {
            arr1[j + 1] = arr1[j];
            j--;
        }

        arr1[j + 1] = min;
    }

    // 排序后数组
    printf("\n排序后数组:");
    for (int i = 0; i < 10; i++)
    {
        printf("%d ", arr1[i]);
    }
    printf("\n");
    return 0;
}