#include <stdio.h>
#define N 7
int main()
{
    int arr[20] = {1, 2, 3, 4, 3, 2, 1};
    int low = 0;
    int high = N - 1;
    int flag = 0;
    while (low < high)
    {
        if (arr[low] != arr[high])
        {
            flag = 1;
            break;
        }
        low++;
        high--;
    }
    if (flag)
    {
        printf("不是对称数组\n");
    }
    else
        printf("是对称数组\n");

    return 0;
}