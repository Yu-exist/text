#include<stdio.h>
//定义储存单个数的结构体
struct nom
{
    int real;
    int ima;
};
int main()
{
    //录入数字
    struct nom a[3];
    printf("请输入两个数字实部：");
        scanf("%d %d",&a[0].real,&a[1].real);
    printf("请输入两个数字虚部：");
        scanf("%d %d",&a[0].ima,&a[1].ima);
    //计算结果
    a[2].real=a[0].real*a[1].real-a[0].ima*a[1].ima;
    a[2].ima=a[0].real*a[1].ima+a[0].ima*a[1].real;
    //输出指定形式
    printf("(%d+%di)*(%d+%di)=%d+%di",a[0].real,a[0].ima,a[1].real,a[1].ima,a[2].real,a[2].ima);
}