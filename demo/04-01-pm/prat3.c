#include <stdio.h>
#include <time.h>
#include <stdlib.h>
// #include <math.h>
int main()
{
    int arr[100] = {0};
    int min = 0;
    int num = 0;
    int low = 0;
    int high = 99;
    for (int i = 0; i < 100; i++)
    {
        arr[i] = rand() % 100;
    }
    // 插入排序数组
    for (int i = 1; i < 100; i++)
    {
        min = arr[i];
        int j = i - 1;
        for (; j >= 0; j--)
        {
            if (min < arr[j])
            {
                arr[j + 1] = arr[j];
            }
            else
                break;
        }
        arr[j + 1] = min;
    }

    for (int i = 0; i < 100; i++)
    {
        printf("%d ", arr[i]);
        // 每 10 个换一行
        if ((i + 1) % 10 == 0)
        {
            printf("\n");
        }
    }

    printf("请输入数字：");
    scanf("%d", &num);

    while (low <= high)
    {
        if (arr[(low + high) / 2] == num)
        {
            printf("找到数字 %d，下标是：%d\n", num, (low + high) / 2);
            break;
        }
        else if (arr[(low + high) / 2] < num)
        {
            low = (low + high) / 2 + 1;
        }
        else
        {
            high = (low + high) / 2 - 1;
        }
    }
    if (low > high)
    {
        printf("未找到数字 ");
    }

    return 0;
}