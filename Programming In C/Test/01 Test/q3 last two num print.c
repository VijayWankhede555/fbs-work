#include<stdio.h>
void main()
{
	int num,r1,q1,r2,q2;
	printf("enter number:");
	scanf("%d",&num);
	r1=num%10;
	q1=num/10;
	r2=q1%10;
	q2=q1/10;
	printf("this is last two numbers:%d  %d",r2,r1);
}