#include<stdio.h>
int main()
{
    char a=0b11000001;
    printf("%d\n",a);
    //最高位置0
    a=-a;
    printf("%d\n",a);
    //清零
    a=0b11000001;
    a&=0;
    printf("%d\n",a);
    //最低两位置1
    a=0b11000001;
    char b=0b00000011;
    a|=b;
    printf("%d\n",a);
    //低四位取反
    a=0b11000001;
    char c=0b00001111;
    a^=c;
    printf("%d\n",a);



}