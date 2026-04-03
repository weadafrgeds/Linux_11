#include <stdio.h>

double fare_meter(double distance);

int main()
{
    double distance; // 实际里程
    int realKm;      // 按规则取整后的里程
    double fare;     // 最终车费

    printf("请输入行驶里程(km):");
    scanf("%lf", &distance);

    fare = fare_meter(distance);

    printf("应付车费：%.2f 元\n", fare);

    return 0;
}

double fare_meter(double distance)
{
    int realKm;
    double fare;
    if (distance - (int)distance == 0)
    {
        realKm = distance;
    }
    else
    {
        realKm = (int)distance + 1;
    }

    if (realKm <= 3)
    {
        fare = 12.0;
    }
    else
    {
        fare = 12.0 + (realKm - 3) * 1.5;
    }
    return fare;
}