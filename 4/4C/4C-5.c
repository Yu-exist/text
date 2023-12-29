#include<stdio.h>
int main()
{
    double height,h,sum;
	int n,i;
	printf("输入高度与次数并分别回车：");
	scanf("%lf",&height);
	scanf("%d",&n); 
	h=sum=height;
	for(i=1;i<=n;i++)
	{
		h=h/2;
		sum=sum+(h+h);
   	}
   	printf("%.1f,%.1f",sum,h);

}