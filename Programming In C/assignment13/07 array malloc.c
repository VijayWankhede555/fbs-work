#include<stdio.h>
#include<stdlib.h>
void main()
{
	int n;
	printf("enter number element: ");
	scanf("%d",&n);
	int* arr=(int*)malloc(sizeof(int)*n);
	int* arr1=(int*)malloc(sizeof(int)*n);
	int* arr2=(int*)malloc(sizeof(int)*n);
	for(int i=0;i<n;i++)
	{
		scanf("%d",&arr[i]);
	}
	printf("enter number 2nd arr: ");
	for(int i=0;i<n;i++)
	{
		scanf("%d",&arr1[i]);
	}
	for(int i=0;i<n;i++)
	{
		arr2[i]=arr[i]+arr1[i];
	}
	for(int i=0;i<n;i++)
	{
		printf("%d\n",arr2[i]);
	}
}