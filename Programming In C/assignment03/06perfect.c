#include<stdio.h>
void main()
{
	int n=28;
	int i=1,sum=0;
	while(i<=n/2)
	 {
	   if(n%i==0)
	    {
	    	sum=sum+i;
			}	
			i++;
	  }
	  if(sum==n)
	   {
	   	 printf("perfect");
	    }
	    else
	     {
	     	printf("not perfect");
		 }
}