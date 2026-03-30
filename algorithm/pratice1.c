#include <stdio.h>
void push(int);
int pop();
int *pi, *tos;
int main()
{
    int v;
    pi = (int *)malloc(50 * sizeof(int));
    if (!pi)
    {
        printf("分配失败\n");
        exit(0);
    }

    tos = pi;
    do
    {
        printf("请输入数值，按下；输入“O”然后弹出；（输入“-1”则停止）\n");
        scanf("%d", &v);
        if (v != 0)
            push(v);
        else
            printf("pop this is it %d\n", pop());
    } while (v != -1);
}

void push(int i)
{
    pi++;
    if (pi == (tos + 50))
    {
        printf("堆栈溢出\n");
        exit(0);
    }
    *pi = 1;
}

int pop()
{
    if (pi == tos)
    {
        printf("堆栈下溢\n");
        exit(0);
    }
    pi--;
    return *(pi + 1);
}
