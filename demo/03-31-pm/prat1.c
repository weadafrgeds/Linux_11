#include <stdio.h>
#include <time.h>
#include <stdlib.h>
int main()
{
    int arr[10] = {0};
    srand(time(NULL));
    int max = 0;
    int max_index = 0;
    int max_index_arr[10] = {0};
    int min = 0;
    int min_index = 0;
    int min_index_arr[10] = {0};
    int j = 0;
    int k = 0;
    for (int i = 0; i < 10; i++)
    {
        arr[i] = rand() % 100;
    }
    // 原数组
    for (int i = 0; i < 10; i++)
    {
        printf("%d\t", arr[i]);
    }
    printf("\n");
    // 原数组下标
    for (int i = 0; i < 10; i++)
    {
        printf("%d\t", i);
    }
    printf("\n");

    max = arr[0];
    min = arr[0];
    for (int i = 1; i < 10; i++)
    {
        if (max < arr[i])
        {
            max = arr[i];
        }
        if (min > arr[i])
        {
            min = arr[i];
        }
    }
    for (int i = 0; i < 10; i++)
    {
        if (max == arr[i])
        {
            max_index_arr[j++] = i;
        }
        if (min == arr[i])
        {
            min_index_arr[k++] = i;
        }
    }
    printf("最大值的下标为");
    for (int i = 0; i < j; i++)
    {
        printf("%d ", max_index_arr[i]);
    }
    printf("\n");

    printf("最小值的下标为");
    for (int i = 0; i < k; i++)
    {
        printf("%d ", min_index_arr[i]);
    }
    printf("\n");
    return 0;
}