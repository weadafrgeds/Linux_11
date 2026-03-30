#include <stdio.h>
int main()
{
    int peop = 0;
    float sum = 0;
    float mean_value = 0;
    printf("请输入考试人数：");
    scanf("%d", &peop);
    float arr[peop];
    for (int i = 0; i < peop; i++)
    {
        printf("请输入第%d个人的成绩:", (i + 1));
        scanf("%f", &arr[i]);
        sum += arr[i];
    }
    mean_value = sum / peop;
    printf("平均成绩为：%.2f", mean_value);
    return 0;
}