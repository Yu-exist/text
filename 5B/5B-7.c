#include<stdio.h>
int main()
{
    //输入字符串以数组存储
    char a[20]={'\0'};
    printf("请输入一串字符:");
    scanf("%s",a);
    int n=0,i=0;
    //计算数组大小
    while(a[i]!=0)
    {
        i++;
        n++;
    }
    int T=1;
    //循环判断首位是否相同，结果用T存储
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