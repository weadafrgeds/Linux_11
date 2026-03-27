#include <stdio.h>
#include <math.h>
int main()
{
    int arr[3] = {0};
    int sum = 0;

    for (int i = 100; i <= 999; i++)
    {
        int num = i;
        for (int j = 0; j <= 2; j++)
        {

            arr[j] = num % 10;
            num = num / 10;
        }
        sum = arr[0] * arr[0] * arr[0] + arr[1] * arr[1] * arr[1] + arr[2] * arr[2] * arr[2];
        if (i == sum)
        {
            printf("水仙花数为：%d\n", i);
        }
    }
    return 0;
}
