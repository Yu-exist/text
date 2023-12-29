#include<stdio.h>
int fib(int n);
int main()
{
    int m,n;
    int mm=1;
    printf("请输入两个数字,以','分隔：");
    scanf("%d,%d",&m,&n);
    int i;
    for(i=0;;i++)
    {
        if(fib(i)>=m&&mm)
        {
            m=i;
            mm=0;
        }
        if(fib(i)>n)
        {
            n=i;
            break;
        }
    }
    for(m;m<=n-1;m++)
    {
        printf("febo:%d\n",fib(m));
    }
}
int fib(int n)
{
    int a[20]={0};
    a[0]=a[1]=1;
    int i;
    for(i=2;i<=n-1;i++)
    {
        a[i]=a[i-1]+a[i-2];
    }
    return a[i-1];
}