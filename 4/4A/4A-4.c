#include<stdio.h>
int main()
{
    //利用整形计算的性质除余
    int n=152;
	int d1=(n%10);
	int d2=((n/10)%10);
	int d3=(n/100);
	printf("整数152的个位数字是%d,十位数字是%d,百位数字是%d.\n",d1,d2,d3);
}