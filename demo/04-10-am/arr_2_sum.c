#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>

int *memtint(int *p, int *n);

int main()
{
    int *arr1 = NULL;
    int *arr2 = NULL;
    int *arr3 = NULL;
    int num = 10;
    int *p = &num;
    arr1 = memtint(arr1, p);
    arr2 = memtint(arr2, p);
    arr3 = memtint(arr3, p);

    for (int i = 0; i < num; i++)
    {
        arr1[i] = i + i;
        arr2[i] = i + i;
    }

    for (int i = 0; i < num; i++)
    {
        arr3[i] = arr1[i] + arr2[i];
    }
    for (int i = 0; i < num; i++)
    {
        printf("arr1[%d]+arr2[%d]=%d\n", i, i, arr3[i]);
    }

    free(arr1);
    free(arr2);
    free(arr3);

    arr1 = NULL;
    arr2 = NULL;
    arr3 = NULL;

    return 0;
}

int *memtint(int *p, int *n)
{
    p = (int *)malloc((*n) * sizeof(int));
    if (p == NULL)
        printf("error");
    memset(p, 0, (*n) * sizeof(int));
    return p;
}
