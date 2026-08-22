#include<stdio.h>
#include<stdlib.h>
void main()
{
	int n;
	printf("enter element: ");
	scanf("%d",&n);
	int* arr=(int*) malloc(sizeof(int) * n);
	printf("enter number: ");
	for(int i=0;i<n;i++)
	{
		scanf("%d",&arr[i]);
	}
	int min=arr[0];
	int max=arr[0];
	for(int i=0;i<n;i++)
	{
		if(arr[i]<min)
		{
			min=arr[i];
		}
		
		if(arr[i]>max)
		{
			max=arr[i];
		}
	}
	printf("minimum arry element: %d\n",min);
	printf("maximum arry element: %d",max);
}