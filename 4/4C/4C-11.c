#include<stdio.h>
int main()
{
    int n,a;
	printf("请输入你的数字：");
	scanf("%d",&n);
	while(n>0)
	{
        a=n%10;
		printf("%d",a);
        n=n/10;
	}
}