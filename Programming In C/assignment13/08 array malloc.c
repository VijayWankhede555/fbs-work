#include<stdio.h>
#include<stdlib.h>
void main()
{
	int n;
	printf("enter element: ");
	scanf("%d",&n);
	int* arr=(int*)malloc(sizeof(int)*n);
	int* arr1=(int*)malloc(sizeof(int)*n);
	int* arr2=(int*)malloc(sizeof(int)*2*n);
	for(int i=0;i<n;i++)
	{
		scanf("%d",&arr[i]);
	}
	printf("enter arr1: ");
	for(int i=0;i<n;i++)
	{
		scanf("%d",&arr1[i]);
	}
	for(int i=0;i<n;i++)
	{
		arr2[i]=arr[i];
	}
	for(int i=0;i<n;i++)
	{
		arr2[i+n]=arr1[i];
	}
	printf("merge two arr \n");
	for(int i=0;i<2*n;i++)
	{
		printf("%d\n",arr2[i]);
	}
	
}