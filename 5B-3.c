#include<stdio.h>
int mian()
{
    int i,n;
    scanf("%d",&n);
    int a[50]={0};
    for(i=0;i<=n-1;i++)
    {
        a[i]=i+1;
    }
    int s,k;
    s=0,k=0;
    for(i=0;;i++)
    {
        if(a[i]!=0)
            s++;
        if(s==3)
        {
            a[i]=0;
            s=0;
            k++;
        }
        if(i==n-1)
            i=0;
        if(k==n-1)
            break;
    }
    for(i=0;;i++)
    {
        if(a[i]!=0)
        {
            printf("%d",a[i]);
            break;
        }
    }
}