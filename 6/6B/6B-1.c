#include<stdio.h>
int main()
{
    FILE *p;
    p=fopen("D:/File setting/a.txt","a");
    if((p==NULL))
    perror("error:");
    const char *get;
    printf("请输入一串字符：");
    scanf("%s",get);
    fprintf(p,"%s",get);
    fclose(p);
    p=fopen("D:/File setting/a.txt","r");
    int num1=0;
    int ascll;
    while((ascll=getc(p))!=-1)
    {
        if((ascll>=65&&ascll<=90)||(ascll<=122&&ascll>=97));
        num1++;
    }
    printf("字母个数为：%d",num1);
    int num2=0;
    rewind(p);
    while((ascll=getc(p))!=-1)
    {
        if(ascll>=48&&ascll<=57)
        num2++;
    }
    printf("数字个数为：%d",num2);
    int n=0;
    rewind(p);
    while((ascll=getc(p))!=-1)
    n++;
    n=n-num1-num2;
    printf("其他字符个数为：%d",n);
    return 0;
    fclose(p);

}