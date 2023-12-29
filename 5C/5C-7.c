#include<stdio.h>
double fact(int n);
double cal(int k,int n);
int main()
{
    int n;
    printf("请输入一个正整数：");
    scanf("%d",&n);
    int k;
    int sum;
    //累加计算每一种组合数
    for(k=1,sum=0;k<=n;k++)
    {
        sum+=cal(k,n);
    }
    printf("%d",sum);
}
//定义函数计算阶乘，double类型返回
double fact(int n)
{
    double sum=1;
    while(n!=0)
    {
        sum*=n;
        n--;
    }
    return sum;
}
//计算组合数
double cal(int k,int n)
{
    double sum;
    sum=(fact(n))/((fact(n-k))*(fact(k)));
    return sum;
}