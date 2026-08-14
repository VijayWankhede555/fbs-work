#include<stdio.h>
void main()
{
	int arr[5];
	printf(".... enter number ....\n");
	for(int i=0;i<5;i++)
	{
		scanf("%d",&arr[i]);
	}
	printf("alternate number:\n");
	for(int i=0;i<5;i++)
	{
		printf("%d\n",arr[i]);
	}
}