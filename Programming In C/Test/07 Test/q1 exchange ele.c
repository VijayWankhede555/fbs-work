#include<stdio.h>
void swap(int arr[7]);
void main()
{
	int arr[7];
	printf("enter element:");
	for(int i=0;i<7;i++)
	{
		scanf("%d",&arr[i]);
	}
	swap(arr);
	printf("exchange the position:\n");
	for(int i=0;i<7;i++)
	{
		printf("%d",arr[i]);
	}
}
void swap(int arr[7])
{
	int x,y,dum;
   printf("enter exchange position:");
   scanf("%d %d",&x,&y);
   dum=arr[x];
    arr[x]=arr[y];
	arr[y]=dum;  
}