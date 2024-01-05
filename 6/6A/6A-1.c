#include<stdio.h>
//定义结构体，包含时分秒
struct time
{
    int h,m,s;
};
int main()
{
    printf("请输入时分秒以','分隔:");
    //定义两个time结构体变量，用于初始值和n秒后值得存储
    struct time a;
    struct time b;
    scanf("%d,%d,%d",&a.h,&a.m,&a.s);
    int n;
    printf("请输入过去的秒数：");
    scanf("%d",&n);
    //综合除于进制和进位赋值b结构体
    b.s=(a.s+n)%60;
    if((a.s+n)>=60)
        b.m=(a.m+1)%60;
    else
        b.m=a.m;    
    if(((a.s+n)>=60)&&a.m==59)
        b.h=(a.h+1)%24;
    else
        b.h=a.h;
    //输出结果
    printf("时间：%d时%d分%d秒",b.h,b.m,b.s);
}