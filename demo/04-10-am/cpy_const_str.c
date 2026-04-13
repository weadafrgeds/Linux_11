#include <stdio.h>
#include <stdlib.h>
#include <string.h>
char *memtchar(char *p, int *n);
char *cpy_conststr(char *dest, const char *str);
int main()
{
    const char *str = "hello";
    char *dest = NULL;
    int *len = NULL;
    int num = 10;
    len = &num;
    dest = memtchar(dest, len);

    dest = cpy_conststr(dest, str);

    printf("%s", dest);

    free(dest);
    dest = NULL;

    return 0;
}

char *cpy_conststr(char *dest, const char *str)
{
    char *temp = dest;
    while (*temp++ = *str++)
        ;
    return dest;
}

char *memtchar(char *p, int *n)
{
    p = (char *)malloc((*n) * sizeof(char));
    if (p == NULL)
        printf("error");
    memset(p, 0, (*n) * sizeof(char));
    return p;
}
