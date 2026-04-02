#include <stdio.h>
#include <time.h>
#include <stdlib.h>
// 成绩排，排名

int main()
{
    int score[10] = {0};
    int index[10] = {0};
    int rank = 0;
    int max = 0;

    char *names[] = {
        "WSK",
        "LTL",
        "LYH",
        "LBX",
        "JZY",
        "YK",
        "RYY",
        "CL",
        "CTC",
        "XXX"};
    for (int i = 0; i < 10; i++)
    {
        score[i] = rand() % 100;
        index[i] = i;
    }
    // 插入排序法（降序）

    for (int i = 1; i < 10; i++)
    {
        max = score[i];
        rank = index[i];
        int j = i - 1;
        for (; j >= 0; j--)
        {
            if (max > score[j])
            {
                score[j + 1] = score[j];
                index[j + 1] = index[j];
            }
            else
                break;
        }
        score[j + 1] = max;
        index[j + 1] = rank;
    }
    // 排序后数组
    printf("排序后:\n");
    for (int i = 0; i < 10; i++)
    {
        printf("第%d名%s,成绩为%d \n", i + 1, names[index[i]], score[i]);
    }
    printf("\n");
}