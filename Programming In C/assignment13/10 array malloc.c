#include<stdio.h>
#include<stdlib.h>
void main()
{
	int n,i,j;
	printf("enter element: ");
	scanf("%d",&n);
	int*arr=(int*)malloc(sizeof(int)*n);
	printf("enter number: ");
	for(i=0;i<n;i++)
	{
		scanf("%d",&arr[i]);
	}
	for(i=0;i<n-1;i++)
	{
		for(j=0;j<n-1-i;j++)
		{
		  if(arr[j]>arr[j+1])
		  {
			int temp;
			temp=arr[j];
			arr[j]=arr[j+1];
			arr[j+1]=temp;
		  }
	    }
	}
	for(i=0;i<n;i++)
	{
		printf("%d\n",arr[i]);
	}
}