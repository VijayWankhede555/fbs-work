#include<stdio.h>
void main()
{
	int num,num1,sum=0;
	printf("enter number:");
	scanf("%d",&num);
	printf("enter second number:");
	scanf("%d",&num1);
	while(num<num1)
	{
		sum=num+num1;
		num++;
	}
	printf("sum:%d",sum);
}