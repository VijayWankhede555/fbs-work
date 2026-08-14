#include<stdio.h>
void main()
{
	int arr[5];
	printf("enter number: ");
	for(int i=0;i<5;i++)
	{
		scanf("%d",&arr[i]);
	}
	int min=arr[0];
	int max=arr[0];
	for(int i=0;i<5;i++)
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