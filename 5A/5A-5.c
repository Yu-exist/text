#include<stdio.h>
int main()
{
    //以二维数组存储矩阵数据
    int n,i,j;
    printf("请输入正整数：");
    scanf("%d",&n);
    printf("请输入%d个整数并都以回车结束:",n*n);
    int a[6][6]={0};
    for(i=0,j=0;i<=n-1;i++)
    {
        for(j=0;j<=n-1;j++)
        scanf("%d",&a[i][j]);
    }
    //分别计算最后一行，列与副对角线的和，并不使之重复，最后用总和减去
    int L,W,H;
    for(i=0,L=0;i<=n-1;i++)
    {
        L+=a[i][n-1];
    }
    for(i=0,W=0;i<=n-2;i++)
    {
        W+=a[n-1][i];
    }
    for(i=n-2,H=0;i>=1;i--)
    {
        H+=a[n-1-i][i];
    }
    //总和的计算
    int sum;
    for(i=0,j=0,sum=0;i<=n-1;i++)
    {
        for(j=0;j<=n-1;j++)
        sum+=a[i][j];
    }
    int end;
    end=sum-L-W-H;
    printf("结果等于=%d",end);
    return 0;
}