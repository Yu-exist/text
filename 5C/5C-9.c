#include<stdio.h>
int prime(int m);
int main()
{
    int m,n;
    int i,sum,num;
    printf("请输入两个数字，并以逗号分隔：");
    scanf("%d,%d",&m,&n);
    for(i=m,sum=0,num=0;i<=n;i++)
    {
        if(prime(i))
        {
            sum+=i;
            num++;
        }
    }
    printf("sum=%d,num=%d",sum,num);
    return 0;

}
int prime(int m)
{
    int i,T=1;
    for(i=2;i<=m/2;i++)
    {
        if(m%i==0)
        T=0;
    }
    return T;
}
