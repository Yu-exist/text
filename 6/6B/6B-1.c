#include<stdio.h>
#include<stdlib.h>
int main()
{
    //定义文件指针，字符串存储指针
    FILE *p;
    p=fopen("D:/File setting/a.txt","a");
    if((p==NULL))
    perror("error:");
    //输入内容
    char *get;
    get=(char*)malloc(20*sizeof(char));
    printf("请输入一串字符：");
    scanf("%s",get);
    fprintf(p,"%s",get);
    fclose(p);
    p=fopen("D:/File setting/a.txt","r");
    int num1=0;
    int ascll;
    int num2=0;
    int n;
    //循环遍历每一个元素，判断所属类型
    while((ascll=getc(p))!=-1)
    {
        if((ascll>=65&&ascll<=90)||(ascll<=122&&ascll>=97))
        num1++;
        if(ascll>=48&&ascll<=57)
        num2++;
        n++;
    }
    n=n-num1-num2;
    //输出计算结果
    printf("字母个数为：%d\n",num1);
    printf("数字个数为：%d\n",num2);
    printf("其他字符个数为：%d",n);
    fclose(p);
    return 0;
}