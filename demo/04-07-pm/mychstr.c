#include <stdio.h>
int mystrlen(const char dest[]);                   // 字符串长度
void mystrcpy(char dest[], const char str[]);      // 字符串拷贝str[]到dest[]
void mystrcat(char dest[], const char str[]);      // 将字符串str[]链接到dest[]
int mystrcmp(const char dest[], const char str[]); // 比较字符串dest[]和str[]
void instr(char dest[]);                           // 字符串输入[]
int main()
{
    const char str[] = {"wsk200207"};
    char dest1[100] = {0};
    char dest2[100] = {0};
    const char src[] = {"wsk20207"};

    instr(dest1);
    printf("%d\n", mystrlen(dest1));
    mystrcpy(dest2, str);
    printf("\n");
    mystrcat(dest1, src);
    printf("\n");
    if (mystrcmp(str, src))
    {
        printf("true\n");
    }
    else
    {
        printf("error\n");
    }
    return 0;
}

int mystrlen(const char dest[])
{
    int len = 0;
    int i = 0;
    while (dest[i] != '\0')
    {
        len++;
        i++;
    }
    return len;
}

void mystrcpy(char dest[], const char str[])
{
    int i = 0;
    int j = 0;
    while (str[i] != '\0')
    {
        dest[i] = str[i];
        i++;
    }
    dest[i] = '\0';
    while (dest[j] != '\0')
    {
        putchar(dest[j]);
        j++;
    }
}

void mystrcat(char dest[], const char str[])
{
    int i = 0;
    int j = 0;
    int len = mystrlen(dest);
    while (str[i] != '\0')
    {
        dest[i + len] = str[i];
        i++;
    }
    dest[i + len] = '\0';
    while (dest[j] != '\0')
    {
        putchar(dest[j]);
        j++;
    }
}

int mystrcmp(const char dest[], const char str[])
{
    int len1 = mystrlen(dest);
    int len2 = mystrlen(str);
    int i = 0;
    if (len1 != len2)
    {
        return 0;
    }
    while (dest[i] != '\0')
    {
        if (dest[i] != str[i])
        {
            return 0;
        }
        i++;
    }
    return 1;
}

void instr(char dest[])
{
    printf("请输入字符串:");
    scanf("%s", dest);
    getchar();
}