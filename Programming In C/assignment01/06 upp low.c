#include<stdio.h>
void main()
{
	char ch;
	printf("enter a charector: ");
	scanf("%c",&ch);
	if(ch>='A'&&ch<='Z')
	{
		printf("this charector is uppercase");
	}
	else
	{
		printf("this charector is lowercase");
	}
}