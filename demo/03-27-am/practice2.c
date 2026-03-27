#include <stdio.h>
#include <math.h>
int main()
{

    for (int i = 0; i < 1000000; i++)
    {
        int num = i;
        int rev = 0;
        while (num != 0)
        {

            rev = rev * 10 + num % 10;
            num = num / 10;
        }
        if (rev == i)
        {
            printf("%d是回文数\n", i);
        }
    }
    return 0;
}
