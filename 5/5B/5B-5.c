#include<stdio.h>
int cut(char*a,char b,int n);
int main()
{
    //定义数组来存储字符串，以及需要删除的字符
    char a[20]={'\0'};
    printf("请输入一串字符:");
    scanf("%s",a);
    printf("请输入一个字符:");
    char b;
    scanf(" %c",&b);
    int n=-1,i=0;
    //计算数组大小
    while(a[i]!=0)
    {
        i++;
        n++;
    }
    int k=cut(a,b,n);
    //输出空字符以外的字符
    for(i=0;i<=k;i++)
    {
        printf("%c",a[i]);
    }
}
//传递数组，字符和数组大小
int cut(char *a,char b,int n)
{
    int i,i2;
    for(i=0;i<=n;i++)
    {
        //逻辑判断，将删除字符位置后的字符全部向前移动
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