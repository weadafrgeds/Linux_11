#include <stdio.h>
int main()
{
    int arr[50] = {0};
    int j = 0;
    for (int i = 1; i < 100; i++)
    {
        if (i % 2 == 0)
        {
            arr[j] = i;
            printf("%d\n", arr[j]);
            j++;
        }
    }
    return 0;
}