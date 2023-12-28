#include<stdio.h>
int cut(char*a,char b,int n);
int main()
{
    char a[20]={'\0'};
    printf("请输入一串字符:");
    scanf("%s",a);
    printf("请输入一个字符:");
    char b;
    scanf(" %c",&b);
    int n=-1,i=0;
    while(a[i]!=0)
    {
        i++;
        n++;
    }
    int k=cut(a,b,n);
    for(i=0;i<=k;i++)
    {
        printf("%c",a[i]);
    }
}
int cut(char *a,char b,int n)
{
    int i,i2;
    for(i=0;i<=n;i++)
    {
        if(a[i]==b)
        {
            for(i2=i;i2<=n;i2++)
            {
                a[i2]=a[i2+1];
            }
            i--;
            n--;
        }
    }
    return n;
}