#include<stdio.h>
void main()
{
	int n=121,temp,r1,rev=0;
	temp=n;
	while(n>0)
	{ 
	 r1=n%10;
	 rev=rev*10+r1;
	 n=n/10;
	}
	if(temp==rev)
	{
		printf("palindrome");
	}
	else
	{
		printf("not palindrome");
	}
}