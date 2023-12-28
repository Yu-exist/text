#include<stdio.h>
int main()
{   //存储输入的数字
    int i,n;
    scanf("%d",&n);
    int a[50]={0};
    for(i=0;i<=n-1;i++)
    {
        a[i]=i+1;
    }
    //建立循环，在s等于3时将数组内的元素变为0
    int s,k;
    s=0,k=0;
    for(i=0;k<n-1;i=(i+1)%n)
    {
        if(a[i]!=0)
            s++;
        if(s==3)
        {
            a[i]=0;
            s=0;
            k++;
        }
    }
    //输出除0以外的唯一数字
    for(i=0;i<=n-1;i++)
    {
        if(a[i]!=0)
        {
            printf("%d",a[i]);
            break;
        }
    }
    return 0;
}