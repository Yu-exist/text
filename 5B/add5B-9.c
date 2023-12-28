#include<stdio.h>
int main()
{
    char a,b,c;
    a=getchar();
    getchar();
    b=getchar();
    c=a;
    a=b;
    b=c;
    printf("%c%c",a,b);
    return 0;
    
}