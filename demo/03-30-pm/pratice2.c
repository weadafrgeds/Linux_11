#include <stdio.h>
#define N 4
#define M 5
int main()
{
    int arr_1[N] = {5, 2, 2, 1};
    int arr_2[M] = {9, 1, 6, 0, 4};
    int res[20] = {0};
    int num = 0;
    int data = 0;
    int count = 0;
    for (int i = 0; i < N; i++)
    {
        res[i] = arr_1[i];
        count++;
    }
    for (int i = 0; i < M; i++)
    {
        res[i + N] = arr_2[i];
        count++;
    }
    for (int i = 0; i < N + M; i++)
    {
        printf("%d ", res[i]);
    }
    printf("\n");
    printf("最后一次的下标为:%d\n", count);
    printf("请输入你要找的数：");
    scanf("%d", &num);
    for (int i = 0; i < N + M; i++)
    {
        if (res[i] == num)
        {
            data++;
        }
    }
    printf("%d共%d个", num, data);
}