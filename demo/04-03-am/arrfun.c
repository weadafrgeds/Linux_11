#include <stdio.h>
#include <time.h>
#include <stdlib.h>
#define N 10
void inputarr(int num[], int n);                   // 输入元素值
void outputarr(int num[], int n);                  // 输出函数
void bubbleSortarr(int num[], int n);              // 排序 (从小到大
int deleteSameArr(int num[], int n);               // 去除相同元素 返回去重后元素个数
int scarchArrIndex(int num[], int n, int element); // 查找输入元素下标

int main()
{
    int n = 0;
    int num[N] = {0};
    int element = 0;
    srand(time(NULL));
    inputarr(num, N);
    outputarr(num, N);
    printf("\n");
    bubbleSortarr(num, N);
    outputarr(num, N);
    printf("\n");
    n = deleteSameArr(num, N);
    outputarr(num, n);
    printf("\n");
    printf("请输入要查找的元素：");
    scanf("%d", &element);
    if (scarchArrIndex(num, n, element) >= 0)
    {
        printf("元素%d的下标为%d\n", element, scarchArrIndex(num, n, element));
    }
    else
    {
        printf("not find\n");
    }
}

void inputarr(int num[], int n)
{
    for (int i = 0; i < n; i++)
    {
        num[i] = rand() % 100;
    }
}

void outputarr(int num[], int n)
{
    for (int i = 0; i < n; i++)
    {
        printf("%d ", num[i]);
    }
}

void bubbleSortarr(int num[], int n)
{
    int min = 0;
    for (int i = 1; i < n; i++)
    {
        min = num[i];
        int j = i - 1;
        for (; j >= 0; j--)
        {
            if (min < num[j])
            {
                num[j + 1] = num[j];
            }
            else
                break;
        }
        num[j + 1] = min;
    }
}

int deleteSameArr(int num[], int n)
{
    for (int i = 0; i < n; i++)
    {
        for (int j = i + 1; j < n; j++)
        {
            if (num[i] == num[j])
            {
                num[j] = 0;
            }
        }
    }
    int k = 0;
    for (int i = 0; i < n; i++)
    {
        if (num[i] != 0)
        {
            num[k++] = num[i];
        }
    }
    return k;
}

int scarchArrIndex(int num[], int n, int element)
{
    for (int i = 0; i < n; i++)
    {
        if (num[i] == element)
        {
            return i;
        }
    }
    return -1;
}
