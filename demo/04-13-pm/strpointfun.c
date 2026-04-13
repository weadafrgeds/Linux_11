#include <stdio.h>

char *str_delet_spece(char *dest); // 删除空格
int str_to_num(char *dest);        // 字符串转数字
char *str_upper(char *dest);       // 小写转大写
char *str_lower(char *dest);       // 大写转小写

int main()
{
    char str[] = "dwada dwadwa ";
    char src[] = " -1212121";
    printf("%s\n", str_delet_spece(str));
    printf("%d\n", str_to_num(src));
    printf("%s\n", str_upper(str));
    printf("%s\n", str_lower(str));

    return 0;
}

char *str_delet_spece(char *dest)
{
    char *temp = dest;
    char *temp2 = dest;
    while (*temp != '\0')
    {
        if (*temp != ' ')
        {
            *temp2++ = *temp;
        }
        temp++;
    }
    *temp2 = '\0';
    return dest;
}

int str_to_num(char *dest)
{
    char *sign = dest;
    int sum = 0;
    while (*dest != '\0')
    {

        if (*dest < '0')
        {
            sign = dest;
        }
        if (*dest >= '0')
        {
            sum = sum * 10 + (*dest - '0');
        }
        dest++;
    }
    if (*sign == '-')
    {
        return -sum;
    }
    return sum;
}

char *str_upper(char *dest)
{
    char *temp = dest;
    while (*temp != '\0')
    {
        if (*temp >= 'a' && *temp <= 'z')
        {
            *temp = *temp - 32;
        }
        temp++;
    }
    return dest;
}

char *str_lower(char *dest)
{
    char *temp = dest;
    while (*temp != '\0')
    {
        if (*temp >= 'A' && *temp <= 'Z')
        {
            *temp = *temp + 32;
        }

        temp++;
    }
    return dest;
}