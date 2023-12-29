#include<stdio.h>
int fib(int n);
int main()
{
    //输入区间
    int m,n;
    //这截断左端点的值
    int mm=1;
    printf("请输入两个数字,以','分隔：");
    scanf("%d,%d",&m,&n);
    int i;
    //通过循环，找出给定区间两端的斐波那契数列的值
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
    //输出区间之间的斐波那契数列
    for(m;m<=n-1;m++)
    {
        printf("febo:%d\n",fib(m));
    }
}
//累积函数，计算到指定的地n位斐波那契数列值
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