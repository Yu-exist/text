#include<stdio.h>
int main()
{
    int a;
    scanf("%d",&a);
    a>>=3;
    int b=1;
    int i;
    printf("4~7为:");
    //循环移位加上归零最后一位以外的数，输出最后一位
    for(i=1;i<=4;i++)
    {
        printf("%d",a&b);
        a>>=1;
    }
}