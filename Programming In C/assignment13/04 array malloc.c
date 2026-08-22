#include<stdio.h>
#include<stdlib.h>
void main()
{
	int n;
	printf("enter number: ");
	scanf("%d",&n);
	int* arr=(int*)malloc(sizeof(int)*n);
	for(int i=0;i<n;i++)
	{
		scanf("%d",&arr[i]);
	}
	for(int i=0;i<n;i++)
	{
		if(arr[i]%2==0)
		{
			printf("even number:%d\n",arr[i]);
		}
		else
		{
			printf("odd number:%d\n",arr[i]);
		}
	}
	
}