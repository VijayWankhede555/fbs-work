#include<stdio.h>
void main()
{
	int num;
	printf("enter number:");
	scanf("%d",&num);
	if(num<0)
	{
		printf("number is negative:%d",num);
	}
	else
	{
		if(num>0)
		{
			printf("number is positive:%d",num);
			
		}
		else
		{
			printf("number is nutral:%d",num);
		}
	}
}