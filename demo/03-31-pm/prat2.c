#include <stdio.h>
#include <time.h>
#include <stdlib.h>
int main()
{
    int arr[10] = {0};
    int count = 0;
    srand(time(NULL));
    for (int i = 0; i < 10; i++)
    {
        arr[i] = rand() % 100;
        for (int j = 0; j < i; j++)
        {
            if (arr[j] == arr[i])
            {
                i--;
                break;
            }
        }
        count++;
    }
    printf("输入%d次\n", count);
    for (int i = 0; i < 10; i++)
    {
        printf("%d ", arr[i]);
    }

    printf("\n");
    return 0;
}