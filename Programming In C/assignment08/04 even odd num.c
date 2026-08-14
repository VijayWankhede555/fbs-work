#include<stdio.h>
void main()
{
	int arr[5],i;
	printf("enter numbers: ");
	for(i=0;i<5;i++)
	{
		scanf("%d",&arr[i]);
	}
	for(i=0;i<5;i++)
	{
		if(arr[i]%2==0)
		{
		  printf("even number is: %d\n",arr[i]);	
		}
	}
	for(i=0;i<5;i++)
	{
		if(arr[i]%2!=0)
		{
			printf("odd number is :%d\n",arr[i]);
		}
	}
}