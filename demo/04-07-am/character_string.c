#include <stdio.h>
#include <string.h>
#include <ctype.h>
void char_3(void);
void char_4_NOT(void);
void char_string(void);
int main()
{
    char_3();
    printf("\n");
    char_4_NOT();
    printf("\n");
    char_string();
}

void char_3(void)
{
    char ch = 0;
    ch = getchar();
    if (isalpha(ch))
    {
        ch += 3;
        if (ch > 'z' || ch > 'Z')
        {
            ch -= 26;
        }
        putchar(ch);
    }
    getchar();
}

void char_4_NOT(void)
{
    char ch = 0;
    ch = getchar();
    if (isalpha(ch))
    {
        if (islower(ch))
        {
            ch += 4;
            if (ch > 'z')
            {
                ch -= 26;
            }
            ch -= 32;
        }

        else if (isupper(ch))
        {
            ch += 4;
            if (ch > 'Z')
            {
                ch -= 26;
            }
            ch += 32;
        }
        putchar(ch);
    }
    getchar();
}

void char_string(void)
{
    char ch[100] = {0};
    int len = 0;
    int ch_count = 0;
    int num_count = 0;
    int sum = 0;
    printf("请输入字符串:");
    scanf("%s", ch);
    len = strlen(ch);
    printf("%d\n", len);
    for (int i = 0; i < len; i++)
    {
        if (!isalpha(ch[i]))
        {
            ch_count++;
        }
    }
    printf("not letter char:%d\n", ch_count);
    for (int i = 0; i < len; i++)
    {
        if (isdigit(ch[i]))
        {
            num_count++;
            sum += (ch[i] - '0');
        }
    }
    printf("num char:%d\n", ch_count);
    printf("num sum:%d\n", sum);
}