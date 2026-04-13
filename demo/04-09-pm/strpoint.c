#include <stdio.h>
int mystrlen(char *dest);              // 字符串长度
char *mystrcpy(char *dest, char *str); // 字符串拷贝str[]到dest[]
char *mystrcat(char *dest, char *str); // 将字符串str[]链接到dest[]
int mystrcmp(char *dest, char *str);   // 比较字符串dest[]和str[]
void instr(char dest[]);               // 字符串输入[]
int main()
{
    char str[] = {"wsk200207"};
    char dest1[100] = {0};
    char dest2[100] = {0};
    char src[] = {"wsk200207"};

    instr(dest1);
    printf("%d\n", mystrlen(dest1));
    mystrcpy(dest2, str);
    printf("%s", dest2);
    printf("\n");
    mystrcat(dest1, src);
    printf("%s", dest1);
    printf("\n");
    if (mystrcmp(str, src) == 1)
    {
        printf("true\n");
    }
    else
    {
        printf("error\n");
    }
    return 0;
}

int mystrlen(char *dest)
{
    int len = 0;
    char *temp = dest;
    while (*temp++ != '\0')
        len++;
    return len;
}

char *mystrcpy(char *dest, char *str)
{
    char *temp = dest;
    while (*temp++ = *str++)
        ;
    return dest;
}

char *mystrcat(char *dest, char *str)
{
    char *temp = dest;
    while (*temp != '\0')
        temp++;
    while (*temp++ = *str++)
        ;
    return dest;
}

int mystrcmp(char *dest, char *str)
{
    char *temp = dest;
    while (*temp == *str)
    {
        temp++;
        str++;
    }
    if (*temp != *str)
    {
        return 0;
    }

    return 1;
}

void instr(char dest[])
{
    printf("请输入字符串:");
    scanf("%s", dest);
    getchar();
}