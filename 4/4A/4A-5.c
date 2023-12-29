#include<stdio.h>
int main()
{
    int m,h,mm;
	printf("请输入确定的分钟数:\n");
	scanf("%d",&m);
	mm=m%60;
	h=(m-mm)/60;
	printf("%dminutes:%dhours and %dminutes.",m,h,mm);
	return 0; 
}