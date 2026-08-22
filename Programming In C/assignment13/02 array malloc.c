#include<stdio.h>
#include<stdlib.h>
void main()
{
	int fact=0,num,n;
	printf("enter number element: ");
	scanf("%d",&n);
	int* arr=(int*)malloc(sizeof(int)*n);
	for(int i=0;i<n;i++)
	{
		scanf("%d",&arr[i]);
	}
	printf("enter searching number: ");
	scanf("%d",&num);
	for(int i=0;i<n;i++)
	{
		if(num==arr[i])
		{
			fact++;
			break;
		}
	}
	if(fact==1)
	{
		printf("number is found: %d",num);
	}
	else
	{
		printf("number is not found: %d",num);
	}
}