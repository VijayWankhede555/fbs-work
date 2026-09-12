#include<stdio.h>
void main()
{
	int arr[5],brr[5],count=0;
	 printf("enter element:");
	 for(int i=0;i<5;i++)
	 {
	 	scanf("%d",&arr[i]);
	 }
	 printf("enter element:");
	 for(int j=0;j<5;j++)
	 {
	 	scanf("%d",&brr[j]);
	 }
	 for(int i=0;i<5;i++)
	 {
	 	for(int j=0;j<5;j++)
	 	{
	 		if(arr[i]==brr[j])
	 		{
	 			printf("%d",brr[j]);
	 			count++;
			 }
		 }
	 }
	 if(count==0)
	 {
	 	printf("element is not found:\n");
	 	
	 }
	 else
	 {
	 	printf("element is  found:\n");
	 }
	
}