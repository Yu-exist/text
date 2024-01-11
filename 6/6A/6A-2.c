#include<stdio.h>
//声明结构体
struct student
{
    char *id;
    char *name;
    int grade;
};
int main()
{
    //定义一个结构体数组
    struct student stu[10];
    //输入数据
    int i,n;
    printf("请输入学生数量：");
    scanf("%d",&n);
    printf("学生数量为:\n",n);
    printf("输入学生学号，姓名及成绩以空格区分,回车区分不同学生：");
    for(i=0;i<=n-1;i++)
    {
        scanf("%s %s %d",&stu[i].id,&stu[i].name,&stu[i].grade);
    }
    //循环，计算平均成绩
    double sum;
    for(i=0,sum=0;;i++)
    {
        sum+=stu[i].grade;
        //设置内出口，输出结果
        if(i==n-1)
        {
            printf("平均分为=%.2f",sum/n);
            break;
        }
    }
    return 0;
}