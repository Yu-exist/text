#include<stdio.h>
int main()
{   //输入外部数据预备
    int n,i;
    printf("请输入一个整数：");
    scanf("%d",&n);
    printf("请输入%d个整数,输入每个数字后都以回车结束:",n);
    int a[10]={0};
    //循环接受数据
    for(i=0;i<=n-1;i++)
    {
        scanf("%d",&a[i]);
    }
    //排序循环
    //这一行为仅仅让最值换位，需要多次执行，嵌套循环
    /*int m,h;
    for(i--;i>=1;i--)
    {
        if(a[i-1]<a[i])
        {
            m=a[i];
            a[i]=a[i-1];
            a[i-1]=m;
        }
    }*/
    //循环遍历每一个元素和除此之外的元素，并排序
    int change,o;
    for(i--;i>=1;i--)
    {
        for(o=i-1;o>=0;o--)
        {
            if(a[i]>a[o])
            {
                change=a[i];
                a[i]=a[o];
                a[o]=change;
            }
        }
    }
    //输出排序数组
    int h;
     printf("此为输出部分：\n");
    for(h=0;h<=n-1;h++)
    printf("%d\n",a[h]);
    return 0;
}