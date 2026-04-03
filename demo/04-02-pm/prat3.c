#include <stdio.h>
#include <math.h>

int isPrime(int n);

int main()
{
    int num;
    printf("请输入一个整数：");
    scanf("%d", &num);

    if (isPrime(num))
    {
        printf("%d 是素数\n", num);
    }
    else
    {
        printf("%d 不是素数\n", num);
    }

    return 0;
}

int isPrime(int n)
{
    if (n < 2)
    {
        return 0;
    }
    if (n == 2)
    {
        return 1;
    }
    if (n % 2 == 0)
    {
        return 0;
    }
    for (int i = 3; i <= sqrt(n); i += 2)
    {
        if (n % i == 0)
        {
            return 0;
        }
    }
    return 1;
}