#include<stdio.h>
void main()
{
	int num,middle,last;
	printf("enter three digits number");
	scanf("%d",&num);
    middle=num/100;
	last=num%10;
	if(middle==last)
	{
		printf("%d is a palindrome number",num);
	}
	else
	{
		printf("%d is not palindrome number",num);
	}
}