#include<stdio.h>
int main()
{
    char a[20]={'\0'};
    printf("请输入一串字符:");
    scanf("%s",a);
    int n=0,i=0;
    while(a[i]!=0)
    {
        i++;
        n++;
    }
    int T=1;
    for(i=0;i<=n/2;i++)
    {
        n--;
        if(a[i]!=a[n])
        {
            T=0;
            break;
        }
    }
    if(T)
    printf("这是一个回文");
    else
    printf("这并非回文");
    return 0;
}