#include<stdio.h>
void main()
{
	int age;
	printf("enter a age: ");
	scanf("%d",&age);
	if(age>=18)
	{
		printf("eligible for vote");
	}
	else
	{
		printf("not eligible for vote");
	}
}