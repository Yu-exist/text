#include<stdio.h>
#include<math.h>
double funcos(double e,double x);
double s(double a,int i);
double fact(int n);
int t(int i);
int main()
{
    double e,x;
    printf("请输入精度与自变量,以','分隔：");
    scanf("%lf,%lf",&e,&x);
    printf("近似值为：%lf",funcos(e,x));
    return 0;
}
double funcos(double e,double x)
{
    int i=0;
    double sum=0;
    while((s(x,2*i)/fact(2*i))>=e)
    {
        sum+=(s(x,2*i)*t(2*i))/fact(2*i);
        i++;
    }
    return sum;
}
//阶乘函数
double fact(int n)
{
    if(n==0)
    return 1;
    
    double sum=1;
    while(n>0)
    {
        sum*=n;
        n--;
    }
    return sum;
}
//自变量次方函数，不带符号
double s(double a, int i)
{
    return pow(a, i);
}
//符号函数
int t(int i)
{
    return ( i/2% 2 == 0) ?1 : -1;
}
