#include<stdio.h>
#include<stdlib.h>
void main()
{
	int flag,i,j,n;
	printf("enter number: ");
	scanf("%d",&n);
	int* arr=(int*)malloc(sizeof(int)*n);
	for(i=0;i<n;i++)
	{
		scanf("%d",&arr[i]);
	}
	for(i=0;i<n;i++)
	{
		flag=0;
		if(arr[i]<2)
		{
			continue;
		}
		for(j=2;j<arr[i];j++)
		{
		 if(arr[i]%j==0)
		 {
			flag=1;
			break;
		 }
	    }
		if(flag==0)
		{
			printf("number is prime: %d\n",arr[i]);
		}
	}
	
}