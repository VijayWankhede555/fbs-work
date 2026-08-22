#include<stdio.h>
#include<stdlib.h>
void main()
{
	int sum=0,n;
	printf("enter number: ");
	scanf("%d",&n);
	int* arr=(int*)malloc(sizeof(int)*n);
	for(int i=0;i<n;i++)
	{
		scanf("%d",&arr[i]);
	}
	for(int i=0;i<n;i++)
	{
		sum=sum+arr[i];
	}
	printf("sum of all array:%d",sum);
}