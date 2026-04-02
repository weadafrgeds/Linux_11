#include <stdio.h>
#include <time.h>
#include <stdlib.h>
int main()
{
    int arr[10] = {0};
    srand(time(NULL));
    int k = 0;
    int count = 1;
    int val = 0;
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
                val = arr[j];
                count++;
            }
        }
    }
    if (count > 1)
    {
        printf("出现最多的数为%d共%d次\n", val, count);
    }
    else
    {
        printf("所有数均出现1次\n");
    }

    return 0;
}