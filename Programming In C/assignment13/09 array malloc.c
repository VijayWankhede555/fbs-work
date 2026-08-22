#include<stdio.h>
#include<stdlib.h>
void main()
{
	int n;
	printf("enter number: ");
	scanf("%d",&n);
	int*arr=(int*)malloc(sizeof(int)*n);
	for(int i=0;i<n;i++)
	{
		scanf("%d",&arr[i]);
	}
	printf("revers array:\n");
	for(int i=n-1;i>=0;i--)
	{
		printf("%d\n",arr[i]);
	}
}