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
    for(k=1,sum=0;k<=n;k++)
    {
        sum+=cal(k,n);
    }
    printf("%d",sum);
}
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
double cal(int k,int n)
{
    double sum;
    sum=(fact(n))/((fact(n-k))*(fact(k)));
    return sum;
}