#include<stdio.h>
void main()
{
	int arr[5],n,fact=0;
	printf("enter elements: ");
	for(int i=0;i<5;i++)
	{
		scanf("%d",&arr[i]);
	}
	printf("enter searching element: ");
	scanf("%d",&n);
	for(int i=0;i<5;i++)
	{
		if(n==arr[i])
		{
			fact++;
			break;
		}
	}
	if(fact!=0)
	{
	  printf("element found:%d",n);
    }
    else
    {
      printf("element not found:%d",n);	
	}
}