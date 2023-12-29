#include<stdio.h>
int main()
{
    int n,i;
	int b=3;
	for(i=4;i>=1;i--)
	{
	printf("输入一个数：\n");
	scanf("%d",&n);
	if(n%3)
	b--;
	if(n%5)
	b--;
	if(n%7)
	b--;
	switch(b)
	{
	case 3: printf("能同时被3,5,7整除。\n"); break;
	case 2: printf("能被其中两数整除。\n");b=b+1; break;
	case 1: printf("能被其中一个数整除。\n");b=b+2; break;
	case 0: printf("不能被3,5,7任一个数整除。\n");b=b+3; break;
	default:
            break;
	}
	}
}