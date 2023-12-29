#include<stdio.h>
int main()
{
    int h;
    printf("请输入你的星期数：");
    scanf("%d",&h);
    switch(h)
	{
 		case 1:printf("monday"); break;
 		case 2:printf("tuesday"); break;
 		case 3:printf("wednesday"); break;
 		case 4:printf("thursday"); break;
 		case 5:printf("firday"); break;
 		case 6:printf("satueday"); break;
 		case 7:printf("sunday"); break;
		default: printf("error"); break;	
 	}
 	return 0;
}