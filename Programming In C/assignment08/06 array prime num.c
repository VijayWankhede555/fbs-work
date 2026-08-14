#include<stdio.h>
void main()
{
	int arr[5],i,j,flag;
	printf("enter numbers: ");
	for(i=0;i<5;i++)
	{
		scanf("%d",&arr[i]);
	}
	for(i=0;i<5;i++)
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
		  printf("prime number:%d\n",arr[i]);	
		}
		
	}
}