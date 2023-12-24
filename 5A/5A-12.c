#include<stdio.h>
int main()
{
    //存储字符串
    int i;
    char a[80]={'\0'};
    i=0;
    gets(a);
    //遍历字符以替换
    while(a[i]!=0)
    {
        if(a[i]>=65&&a[i]<=90)
        {
            a[i]=155-a[i];
            
        }
        i++;
    }
   //输出改动字符串
    puts(a);
}