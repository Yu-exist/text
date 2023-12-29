#include<stdio.h>
//全局变量，用以存储数组大小
int m,n;
char * str_cat(char *s,char *t);
int main()
{
    //输入两个字符数组
    char a[20]={'\0'};
    printf("请输入一串字符:");
    scanf("%s",a);
    int i=0;
    n=0;
    while(a[i]!=0)
    {
        i++;
        n++;
    }
    char b[20]={'\0'};
    printf("请输入另一串字符:");
    scanf("%s",b);
    i=0;
    m=0;
    while(b[i]!=0)
    {
        i++;
        m++;
    }
    //定义指针接受函数返回值，地址
    char *p=str_cat(a,b);
    printf("postion:%p\n",p);
    printf("result of link:");
    for(i=0;i<=n+m+1;i++)
    {
        
        printf("%c",a[i]);
    }
    return 0;
}
//定义指针类型函数
char * str_cat(char *s,char *t)
{
    int i;
    //连接两个数组元素
    for(i=n+1;i<=n+m+1;i++)
    {
        s[i]=t[i-n-1];
    }
    return s;
}
