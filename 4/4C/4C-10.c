#include<stdio.h>
int main()
{
    int i,ii,iii;
	int a=3,h=1;
	for(i=1;i<=4;i++)		
	{
		for(iii=1;iii<=a;iii++)
		{
			printf(" ");
		}
		for(ii=1;ii<=h;ii++)
		{
			printf("*");
		}
		printf("\n");
		h=h+2;
		a--;
	}
	int k,kk,kkk;
	int q=1,w=5;
	for(k=1;k<=3;k++)
	{
		for(kkk=1;kkk<=q;kkk++)
		{
			printf(" ");
		}
		for(kk=1;kk<=w;kk++)
		{
			printf("*");
		}
		printf("\n");
		q++;
		w=w-2;
	}
}