#include <stdio.h>
#include <math.h>
int main()
{

    int num = 0;
    int rev = 0;
    printf("请输入一个数", num);
    scanf("%d", &num);
    while (num != 0)
    {

        rev = rev * 10 + num % 10;
        num = num / 10;
    }

    printf("反转数为:%d\n", rev);
    return 0;
}
