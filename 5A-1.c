#include<stdio.h>
int main()
{
    int n,i;
    printf("请输入一个整数：");
    scanf("%d",&n);
    printf("请输入%d个整数,输入每个数字后都以回车结束:",n);
    int a[10]={0};
    for(i=0;i<=n-1;i++)
    {
        scanf("%d",&a[i]);
    }
    for(i--;i>=0;i--)
    {
        printf("%d\n",a[i]);
    }
    return 0;
}