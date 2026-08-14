#include<stdio.h>
void main()
{
	int arr[5],
	   arr1[5], 
	   arr2[5];
	printf("enter numbers 1st arry:\n ");
	for(int i=0;i<5;i++)
	{
		scanf("%d",&arr[i]);
	}
	printf("enter number 2nd arry:\n ");
	for(int i=0;i<5;i++)
	{
		scanf("%d",&arr1[i]);
	}
	for(int i=0;i<5;i++)
	{
		arr2[i]=arr[i]+arr1[i];
	}
	 printf("sum of two arry\n");
	for(int i=0;i<5;i++)
	{
		printf("%d\n",arr2[i]);
	}
	
}
