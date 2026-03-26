#include<stdio.h>
int main(){
    int a=0;
    int b=0;
    int c=0;
    int d= 0;
    printf("请输入第一个数：");
    scanf("%d",&a);

    printf("请输入第二个数：");
    scanf("%d",&b);

    c=a/b;
    d=a%b;
    printf("商为:%d,余数为：%d\n",c,d);
    
   }
   
