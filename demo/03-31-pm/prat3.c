#include <stdio.h>
#include <time.h>
#include <stdlib.h>
int main()
{
    int arr[10] = {0};
    srand(time(NULL));
    int k = 0;
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
    for (int i = 0; i < 10; i++)
    {
        for (int j = i + 1; j < 10; j++)
        {
            if (arr[j] == arr[i])
            {
                arr[j] = 0;
            }
        }
    }

    for (int i = 0; i < 10; i++)
    {
        if (arr[i] != 0)
        {
            arr[k++] = arr[i];
        }
    }
    printf("去重后数组:\n");
    for (int i = 0; i < k; i++)
    {
        printf("%d ", arr[i]);
    }
    printf("\n");
    return 0;
}