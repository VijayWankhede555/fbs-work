#include<stdio.h>
void main()
{
	int n=12345,temp,sum,r1,r2;
	temp=n;
    	r1=n%10;
    	while(temp>=10)
    	{
    	  temp=temp/10;
         }
         sum=temp+r1;
         printf("sum=%d",sum);
}