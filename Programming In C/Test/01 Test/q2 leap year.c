#include<stdio.h>
void main()
{
	int yr;
	printf("enter year:");
	scanf("%d",&yr);
	if((yr%400==0) || (yr%4==0&&yr%100!=0))
	{
		printf("this is leap year:%d",yr);
	}
	else
	{
		printf("this is not leap year:%d",yr);
	}
}