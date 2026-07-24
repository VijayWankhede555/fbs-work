#include<stdio.h>
void main()
{
	int yr;
	printf("enter a year");
	scanf("%d",&yr);
	if((yr%400==0) || (yr%4==0&&yr%100!=0))
	{
		printf(" %d year is leap year",yr);
	}
	else
	{
		printf("%d  year is not leap year",yr);
	}
	
	
}