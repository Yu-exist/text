#include<stdio.h>
int main()
{
    short int a;
    short int b;
    int n;
    scanf("%d",&n);
    a=0b0000111111;
    //复制a将要因为移动失去的位数
    b=0b0111111111111111;
    b>>=(15-n);
    b&=a;
    //右移a
    a>>=n;
    //左移b，便于对a的左部进行操作
    b<<=(16-n);
    a=a^b;
    printf("%d",a);
}