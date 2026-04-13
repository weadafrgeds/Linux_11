#include <stdio.h>

char *strfirst(const char *dest, const char *str); // 字符串第一次出现的地址 dest主串 str子串

int main()
{

    const char *str = "Hello";
    const char *src = "Helso Hell Hello world";

    printf("%c--%p\n", *strfirst(src, str), strfirst(src, str));
    printf("%c--%p\n", *(src + 11), src + 11);

    return 0;
}

char *strfirst(const char *dest, const char *str)
{
    const char *temp = dest;

    while (*temp != '\0')
    {
        const char *t = temp;
        const char *s = str;

        while (*t != '\0' && *s != '\0' && *t == *s)
        {
            t++;
            s++;
        }
        if (*s == '\0')
        {
            return temp;
        }

        temp++;
    }

    return 0;
}