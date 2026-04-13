#include <stdio.h>

void rev(int arr[], int n);
int main()
{
    int arr[10] = {1, 2, 3, 4, 5, 6};
    rev(arr, 6);
    for (int i = 0; i < 6; i++)
    {
        printf("%d", arr[i]);
    }
}

int arr2D_sum(int *arr, int m, int n)
{
    int sum = 0;
    for (int i = 0; i < m * n; i++)
    {
        sum += *arr;
        arr++;
    }
}