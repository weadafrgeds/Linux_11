#include <stdio.h>
int main()
{
    int flag = 0;
    int j = 0;
    int arr[100] = {0};
    for (int i = 1; i <= 100; i++)
    {
        int num = i;

        while (num != 0)
        {
            if (num % 10 == 7)
            {
                flag = 1;
            }
            else
                flag = 0;
            num /= 10;
        }

        if (i % 7 == 0 || flag == 1)
        {
            arr[j++] = i;
        }
    }

    for (int i = 0; i < j; i++)
    {
        printf("%d ", arr[i]);
    }
    printf("\n");
    printf("共%d个", j);
    return 0;
}