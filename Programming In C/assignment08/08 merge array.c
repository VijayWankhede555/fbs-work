#include<stdio.h>
void main()
{
	int arr[5];
	int arr1[5];
	int arr2[10];
	printf("ente number 1st arry: ");
	for(int i=0;i<5;i++)
	{
		scanf("%d",&arr[i]);
	}
	printf("enter number 2nd arry: ");
	for(int i=0;i<5;i++)
	{
	    scanf("%d",&arr1[i]);
	}
	for(int i=0;i<5;i++)
	{
		arr2[i]=arr[i];
	}
	for(int i=0;i<5;i++)
	{
		arr2[i+5]=arr1[i];
	}
	printf("merge arry: ");
	for(int i=0;i<10;i++)
	{
		printf("%d",arr2[i]);
	}
}