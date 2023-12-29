#include<stdio.h>
int main()
{   //输入外部数据预备量
    int n,i;
    printf("请输入一个整数：");
    scanf("%d",&n);
    printf("请输入%d个整数,输入每个数字后都以回车结束:",n);
    int a[10]={0};
    //循环接受数据
    for(i=0;i<=n-1;i++)
    {
        scanf("%d",&a[i]);
    }
    //逆序输出数据
    printf("此为输出部分：\n");
    for(i--;i>=0;i--)
    {
        printf("%d\n",a[i]);
    }
    return 0;
}