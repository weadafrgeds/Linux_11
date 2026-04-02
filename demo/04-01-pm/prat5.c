#include <stdio.h>
#include <time.h>
#include <stdlib.h>
int main()
{
    int arr[10] = {0};
    int new_arr[10] = {0};
    srand(time(NULL));
    int k = 0;
    int count[10] = {0};
    int order[10] = {0};
    int n = 0;
    for (int i = 0; i < 10; i++)
    {
        arr[i] = rand() % 10;
        if (arr[i] % 2 == 1)
        {
            arr[i] = -arr[i];
        }
    }
    for (int i = 0; i < 10; i++)
    {
        printf("%d ", arr[i]);
    }

    printf("\n");
    for (int i = 0; i < 10; i++)
    {
        if (arr[i] > 0)
        {
            new_arr[k++] = arr[i];
        }
    }
    for (int i = 0; i < k; i++)
    {
        printf("%d ", new_arr[i]);
    }

    printf("\n");
    for (int i = 0; i < k; i++)
    {
        if (count[new_arr[i]] == 0)
        {
            order[n++] = new_arr[i]; // -- 储存第一次出现的顺序
        }
        count[new_arr[i]]++; //-- 存储次数
    }
    for (int i = 0; i < n; i++)
    {
        printf("[%d:%d] ", order[i], count[order[i]]);
    }
    printf("\n");

    return 0;
}