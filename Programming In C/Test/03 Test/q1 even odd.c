#include<stdio.h>
void main()
{
	int num,num1,num2,num3;
	printf("enter frist number:");
	scanf("%d",&num);
	printf("enter second number:");
	scanf("%d",&num1);
	printf("odd");
	while(num<=num1)
	{
		if(num%2!=0)
		{
			printf("%d",num);
		}
		num++;
	}
	printf("enter number:");
	scanf("%d",&num2);
	printf("enter second number:");
	scanf("%d",&num3);
	printf("even");
	while(num2<=num3)
	{
		if(num2%2==0)
		{
			printf("%d",num2);
		}
		num2++;
	}
}