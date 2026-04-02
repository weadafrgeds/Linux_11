#include <stdio.h>
#define N 5
int main()
{
    int arr[20] = {7, 5, 4, 6, 2};
    int max = 0;
    int max_index = 0;
    int min = 0;
    int min_index = 0;
    max = arr[0];
    min = arr[0];
    for (int i = 1; i < N; i++)
    {
        if (max < arr[i])
        {
            max = arr[i];
            max_index = i;
        }
        if (min > arr[i])
        {
            min = arr[i];
            min_index = i;
        }
    }
    if (max_index > min_index)
    {
        for (int i = max_index; i < N - 1; i++)
        {
            arr[i] = arr[i + 1];
        }
        arr[N - 1] = 0;
        for (int i = min_index; i < N - 1; i++)
        {
            arr[i] = arr[i + 1];
        }
        arr[N - 1] = 0;
    }
    else
    {
        for (int i = min_index; i < N - 1; i++)
        {
            arr[i] = arr[i + 1];
        }
        arr[N - 1] = 0;
        for (int i = max_index; i < N - 1; i++)
        {
            arr[i] = arr[i + 1];
        }
        arr[N - 1] = 0;
    }

    for (int i = 0; i < N; i++)
    {
        printf("%d", arr[i]);
    }
    printf("\n");
    return 0;
}