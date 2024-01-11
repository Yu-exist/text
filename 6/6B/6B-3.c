#include<stdio.h>
#include<stdlib.h>
//定义结构体
struct student 
{
    char *num;
    char name[38];
    int math;
    int chi;
    int Eng;
    int all;
    int ave;
};
int main()
{
    struct student a[5];
    int i;
    for(i=0;i<=4;i++)
    {
        a[i].num=(char*)malloc(40*sizeof(char));
    }
    //赋值文件指针
    FILE *p;
    //输入内容
    printf("请输入学号，姓名，数学，语文，英语，并以空格分隔:");
    for(i=0;i<=4;i++)
    scanf("%s %s %d %d %d",a[i].num,a[i].name,&a[i].math,&a[i].chi,&a[i].Eng);
    for(i=0;i<=4;i++)
    {
        a[i].all=a[i].math+a[i].chi+a[i].Eng;
        a[i].ave=a[i].all/3;
    }
    //写入文件
    p=fopen("D:/File setting/a.txt","w");
    fprintf(p,"  学号   姓名    数学  语文  英语  总成绩  平均分  \n");
    for(i=0;i<=4;i++)
    fprintf(p,"%s  %s    %d    %d    %d     %d      %d\n",a[i].num,a[i].name,a[i].math,a[i].chi,a[i].Eng,a[i].all,a[i].ave);
    fclose(p);
    //读取文件，重新输出
    p=fopen("D:/File setting/a.txt","r");
    char print;
    while((print=getc(p))!=EOF)
    putchar(print);
}