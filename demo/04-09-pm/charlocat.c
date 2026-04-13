#include <stdio.h>
char *firstlocat(char *dest, char test);
char *lastlocat(char *dest, char test);
int main()
{
    char str[] = {"wsk200207"};
    char test = 0;
    char *firstchar = NULL;
    char *lastchar = NULL;
    printf("请输入你要找的字符");
    scanf("%c", &test);

    if ((firstchar = firstlocat(str, test)) != NULL)
    {
        printf("%c第一次出现的地址在%p\n", test, firstchar);
    }
    else
    {
        printf("not find");
    }
    if ((lastchar = lastlocat(str, test)) != NULL)
    {
        printf("%c最后一次出现的地址在%p\n", test, lastchar);
    }
    else
    {
        printf("not find");
    }
    return 0;
}

char *firstlocat(char *dest, char test)
{
    char *temp = dest;
    while (*temp != '\0')
    {
        if (*temp == test)
        {
            return temp;
        }
        temp++;
    }
    return NULL;
}

char *lastlocat(char *dest, char test)
{
    char *temp = dest;
    while (*temp++ != '\0')
        ;

    while (temp >= dest)
    {
        if (*temp == test)
        {
            return temp;
        }
        temp--;
    }
    return NULL;
}