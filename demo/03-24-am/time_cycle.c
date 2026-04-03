#include<stdio.h>
int main(){
    int a=0;
    int b=60;
    int c=0;
    int d=0;
    printf("请输入分钟数：");
    scanf("%d",&a);
    c=a/b;
    d=a%b;
    printf("时间为:%d小时%d分钟\n",c,d);
    
   }
    
