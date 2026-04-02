#include <stdio.h>
#define N 5
int main()
{
    int arr[N] = {0};
    int i, j;

    for (i = 0; i < N;)
    {
        printf("请输入数字:");
        scanf("%d", &arr[i]);
        int sam_flag = 0;
        for (j = 0; j < i; j++)
        {
            if (arr[j] == arr[i])
            {
                sam_flag = 1;
                break;
            }
        }
        if (sam_flag)
        {
            printf("数字重复，请重新输入\n");
        }
        else
            i++;
    }

    printf("元素：");

    for (int i = 0; i < N; i++)
    {
        printf("%d", arr[i]);
    }
    printf("\n");
}