#include<stdio.h>
int main()
{
    //定义两个指针定位两个文件
    FILE *p;
    FILE *p1;
    p=fopen("D:/File setting/a.txt","r");
    p1=fopen("D:/File setting/b.txt","r");
    //定义整型来存储行列值
    char p_a;
    char p1_a;
    int p_m,p_n;
    p_m=1;
    p_n=0;
    int p1_m,p1_n;
    p1_m=1;
    p1_n=0;
    //循环遍历两文件中每一个元素
    while(( p_a=getc(p))!=EOF&&(p1_a=getc(p1))!=EOF)
    {
        p_n++;
        p1_n++;
        //选择语句判断相等与否
        if(p_a!=p1_a)
        {
            printf("不同字符分别为:%c,%c",p_a,p1_a);
            printf("两文件行列值:行:%d 列:%d,行:%d 列:%d",p_m,p_n,p1_m,p1_n);
            break;
        }
        //换行符进行累加和列数重置
        if(p_a=='\n')
        {
            p_m++;
            p_n=0;
        }
        if(p1_a=='\n')
        {
            p1_m++;
            p1_n=0;
        }
    }
    return 0;
}