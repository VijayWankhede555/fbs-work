#include<stdio.h>
void main()
{
	int arr[5],sum=0;
	printf("enter element: ");
	for(int i=0;i<5;i++)
	{
		scanf("%d",&arr[i]);
	}
	for(int i=0;i<5;i++)
	{
		sum=sum+arr[i];
	}
	printf("sum of all numbers: %d",sum);
}