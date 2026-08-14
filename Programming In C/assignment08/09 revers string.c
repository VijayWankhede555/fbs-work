#include<stdio.h>
void main()
{
	int arr[5];
	printf("enter number: ");
	for(int i=0;i<5;i++)
	{
		scanf("%d",&arr[i]);
	}
	printf("revers arry: ");
	for(int i=4;i>=0;i--)
	{
		printf("%d\n",arr[i]);
	}
}