#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>

char *memtchar(char *p, int *n);
void postv(char *p);
void antit(char *p);

int main()
{
    char *pin = NULL;
    char *pin2 = NULL;
    int num = 26;
    int *p = &num;
    pin = memtchar(pin, p);
    pin2 = pin;
    for (int i = 0; i < num; i++)
    {
        *pin2 = 'a' + i;
        pin2++;
    }
    postv(pin);
    printf("\n");
    antit(pin);
    free(pin);
    pin = NULL;
    return 0;
}

char *memtchar(char *p, int *n)
{
    p = (char *)malloc((*n) * sizeof(char));
    if (p == NULL)
        printf("error");
    memset(p, 0, (*n) * sizeof(char));
    return p;
}

void postv(char *p)
{
    char *temp = p;
    while (isalpha(*temp))
    {
        putchar(*temp++);
        printf("\t");
    }
}

void antit(char *p)
{
    char *temp = p;
    while (isalpha(*temp))
    {
        temp++;
    }
    temp -= 1;
    while (isalpha(*temp))
    {
        putchar(*temp--);
        printf("\t");
    }
}
