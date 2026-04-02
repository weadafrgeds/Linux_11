#include <stdio.h>
#define N 5
int main()
{
    int arr[20] = {1, 2, 3, 4, 5};

    int index = 0;
    int new_num = 0;
    for (int i = 0; i < N; i++)
    {
        printf("%d ", arr[i]);
    }
    printf("\n");
    printf("请输入你要插入的位置");
    scanf("%d", &index);
    printf("\n");
    printf("请输入你要插入的数");
    scanf("%d", &new_num);
    printf("\n");
    for (int i = N; i >= index; i--)
    {
        arr[i] = arr[i - 1];
    }
    arr[index] = new_num;
    for (int i = 0; i < N + 1; i++)
    {
        printf("%d", arr[i]);
    }
    printf("\n");
    return 0;
}