#include <stdio.h>
int main()
{
    int down = 0;
    int up = 0;
    printf("请输入两个数：");
    scanf("%d %d", &down, &up);
    if (down > up)
    {
        int temp = 0;
        temp = down;
        down = up;
        up = temp;
    }

    down = down > 2 ? down : 2;

    for (int i = down; i <= up; i++)
    {

        int flag = 0;
        for (int j = 2; j <= i - 1; j++)
        {
            if (i % j == 0)
            {
                flag = 1;
                break;
            }
        }

        if (flag == 1)
        {
            printf("%d not prime\n", i);
        }
        else
        {
            printf("%dprime\n", i);
        }
    }
    return 0;
}