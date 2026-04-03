#include<stdio.h>
int main(){
    int a=0;
    int b=0;
    int c=0;
    int d= 0;
    printf("请输入3个数：");
    scanf("%d %d %d",&a,&b,&c);
    d=c;
    c=b;
    b=a;
    a=d;
    printf("%d,%d,%d\n",a,b,c);
   }
    
