#include<stdio.h>
void main()
{
	int n;
	int i,j,sum;
	printf("enter no");
	scanf("%d",&n);
	for(i=1;i<=n;i++)
	 {
	 	sum=0;
	 	for(j=1;j<i;j++)
	 	 {
	 	 	if(i%j==0)
	 	 	 {
	 	 	 	sum=sum+j;
			   }
		  }
		  if(sum==i)
		   {
		   	printf("%d\n",i);
		   }
	 }
	 
}
	