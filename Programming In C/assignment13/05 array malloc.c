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
	printf("alternate num:\n");
	for(int i=0;i<n;i++)
	{
		printf("%d\n",arr[i]);
	}
}