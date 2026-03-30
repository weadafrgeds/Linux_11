#include <stdio.h>
#define N 10
int main()
{
    int arr[N] = {0};
    int num = 0;
    while (1)
    {
        printf("请输入数字(输入0结束):");
        scanf("%d", &num);
        if (num == 0)
            break;
        for (int i = 0; i < N - 1; i++)
        {
            arr[i] = arr[i + 1];
        }

        arr[N - 1] = num;
    }
    printf("\n最后10次输入的值为：\n");
    for (int i = 0; i < N; i++)
    {
        printf("%d ", arr[i]);
    }
    printf("\n");

    return 0;
}