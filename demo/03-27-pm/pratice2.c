#include <stdio.h>
int main()
{
    int num = 0;
    printf("请输入一个数：");
    scanf("%d", &num);
    for (int i = 0; i <= num; i++)
    {
        int temp = i;
        int bit = 0;
        while (temp >= 0)
        {
            if (bit != 7)
            {
                bit = temp % 10;
                temp / 10;
            }
            else
            {
                break;
            }
        }
        if (i % 7 != 0 && bit != 7)
        {
            printf("%d\n", i);
        }
    }
    return 0;
}