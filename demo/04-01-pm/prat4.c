#include <stdio.h>
#include <time.h>
#include <stdlib.h>
int main()
{
    int arr1[10] = {0};
    int arr2[10] = {0};
    int arr3[20] = {0};
    int sam_fg = 0;
    int min = 0;
    int num = 0;
    int k = 0;
    for (int i = 0; i < 10; i++)
    {
        arr1[i] = rand() % 100;
        arr2[i] = rand() % 100;
    }
    printf("原数组1:");
    for (int i = 0; i < 10; i++)
    {
        printf("%d ", arr1[i]);
    }
    printf("\n原数组2:");
    for (int i = 0; i < 10; i++)
    {
        printf("%d ", arr2[i]);
    }

    for (int i = 0; i < 10; i++)
    {
        for (int j = i; j < 10; j++)
        {
            if (arr1[i] == arr2[j])
            {
                sam_fg = 1;
            }
        }
        if (sam_fg == 0)
        {
            arr3[i] = arr1[i];
        }
        else
            sam_fg = 0;
    }

    for (int i = 0; i < 10; i++)
    {
        for (int j = i; j < 10; j++)
        {
            if (arr1[i] == arr2[j])
            {
                sam_fg = 1;
            }
        }
        if (sam_fg == 0)
        {
            arr3[i + 10] = arr2[i];
        }
        else
            sam_fg = 0;
    }
    printf("\n");
    for (int i = 0; i < 20; i++)
    {
        printf("%d ", arr3[i]);
    }
    printf("\n");

    for (int i = 0; i < 20; i++)
    {
        for (int j = i + 1; j < 20; j++)
        {
            if (arr3[j] == arr3[i])
            {
                arr3[j] = 0;
                i--;
                break;
            }
        }
    }
    for (int i = 0; i < 20; i++)
    {
        if (arr3[i] != 0)
        {
            arr3[k++] = arr3[i];
        }
    }
    printf("\n");
    for (int i = 0; i < k; i++)
    {
        printf("%d ", arr3[i]);
    }
    printf("\n");
    return 0;
}