#include <stdio.h>
#include <assert.h>
int even_count(int *arr, int n);
void variable_order(int *num1, int *num2, int *num3);
int main()
{
    int count = 0;
    int num1 = 532;
    int num2 = 382;
    int num3 = 32;
    int arr[10] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
    count = even_count(arr, 10);
    printf("%d\n", count);
    variable_order(&num1, &num2, &num3);
    printf("%d %d %d", num1, num2, num3);
    return 0;
}

int even_count(int *arr, int n)
{
    int count = 0;
    assert(arr != NULL);
    for (int i = 0; i < n; i++)
    {
        if (*(arr + i) % 2 == 0)
        {
            count++;
        }
    }
    return count;
}
void variable_order(int *num1, int *num2, int *num3)
{
    int temp = 0;
    if (*num1 > *num2)
    {
        temp = *num1;
        *num1 = *num2;
        *num2 = temp;
    }
    if (*num2 > *num3)
    {
        temp = *num2;
        *num2 = *num3;
        *num3 = temp;
    }
    if (*num1 > *num2)
    {
        temp = *num1;
        *num1 = *num2;
        *num2 = temp;
    }
}