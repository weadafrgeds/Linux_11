#include <stdio.h>
#include <math.h>
int main()
{
    for (int i = 1; i < 10000; i++)
    {
        int sum = 0;
        for (int j = 1; j <= i / 2; j++)
        {

            if (i % j == 0)
            {
                sum += j;
            }
        }
        if (i == sum)
        {
            printf("%d是完数\n", i);
        }
    }
    return 0;
}
