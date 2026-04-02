#include <stdio.h>
#include <time.h>
#include <stdlib.h>
int main()
{
    int arr[10] = {0};
    srand(time(NULL));
    int min = 0;
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
    // 插入排序法1（升序）

    for (int i = 1; i < 10; i++)
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

    for (int i = 1; i < 10; i++)
        // 排序后数组
        printf("排序后数组:\n");
    for (int i = 0; i < 10; i++)
    {
        printf("%d ", arr[i]);
    }
    printf("\n");
    return 0;
}