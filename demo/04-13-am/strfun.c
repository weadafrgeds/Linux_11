#include <stdio.h>

char *mystrncpy(char *dest, char *str, int n);               // 字符串拷贝str前n个到dest[]
char *mystrncat(char *dest, char *str, int n);               // 将字符串str前n个链接到dest[]
int mystrncmp(const char *dest, const char *str, int n);     // 比较字符串dest[]和str前n个
int mystrcasencmp(const char *dest, const char *str, int n); // 比较字符串dest[]和str前n个忽略大小写

int main()
{

    const char *str = "abcdef";
    const char *src = "AbcdEf";
    char dest[100] = {0};
    char string[] = {"dsadsadsadsa"};
    printf("%s\n", mystrncpy(dest, string, 5));
    printf("%s\n", mystrncat(dest, src, 3));
    printf("%d\n", mystrncmp(str, src, 5));
    printf("%d\n", mystrcasencmp(str, src, 5));

    return 0;
}

char *mystrncpy(char *dest, char *str, int n)
{
    if (n <= 0)
        return 0;
    char *temp = dest;
    for (int i = 0; i < n && *str != '\0'; i++)
    {
        *temp++ = *str++;
    }
    *temp = '\0';
    return dest;
}

char *mystrncat(char *dest, char *str, int n)
{
    if (n <= 0)
        return 0;
    char *temp = dest;
    while (*temp != '\0')
        temp++;
    for (int i = 0; i < n && *str != '\0'; i++)
    {
        *temp++ = *str++;
    }
    *temp = '\0';
    return dest;
}

int mystrncmp(const char *dest, const char *str, int n)
{
    if (n <= 0)
        return -1;
    const char *temp = dest;
    for (int i = 0; i < n && *str != '\0'; i++)
    {
        if (*temp != *str)
        {
            return *temp - *str;
        }
        temp++;
        str++;
    }
    return 0;
}

int mystrcasencmp(const char *dest, const char *str, int n)
{
    if (n <= 0)
        return -1;
    const char *temp = dest;
    for (int i = 0; i < n && *str != '\0'; i++)
    {
        if (*str > 'a' && *str < 'z')
        {
            if (*temp != *str && *temp != (*str - 32))
            {
                if (*temp - *str < -32)
                {
                    return *temp - *str + 32;
                }

                return *temp - *str;
            }
        }
        if (*str > 'A' && *str < 'Z')
        {
            if (*temp != *str && *temp != (*str + 32))
            {

                if (*temp - *str > 32)
                {
                    return *temp - *str - 32;
                }
                return *temp - *str;
            }
        }
        temp++;
        str++;
    }
    return 0;
}