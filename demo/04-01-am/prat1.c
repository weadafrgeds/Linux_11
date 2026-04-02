#include <stdio.h>
#include <time.h>
#include <stdlib.h>
int main()
{

    int arr[10] = {0};
    srand(time(NULL));
    int min_idx = 0;
    int temp = 0;
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
    printf("\n");
    // 选择排序
    for (int i = 0; i < 10 - 1; i++)
    {
        min_idx = i;
        for (int j = i + 1; j < 10; j++)
        {
            if (arr[j] < arr[min_idx])
            {
                min_idx = j;
            }
        }
        temp = arr[i];
        arr[i] = arr[min_idx];
        arr[min_idx] = temp;
    }
    // 排序后数组
    printf("排序后数组:\n");
    for (int i = 0; i < 10; i++)
    {
        printf("%d ", arr[i]);
    }
    printf("\n");
    return 0;
}