#include<stdio.h>
void main()
{
	int unit,total;
	printf("enter your unit:");
	scanf("%d",&unit);
	if(unit<=0)
	{
		printf("invalid unit");
	}
	else
	{
		if(unit<=50)
		{
			printf("per unit 30rs.\n");
			total=unit*30;
			printf("total bill is:%d",total);
		}
		else
		{
			if(unit<=150)
			{
				printf("per unit 40rs.\n");
				total=unit*40;
				printf("total bill is:%d",total);
			}
			else
			{
				if(unit>150)
				{
					printf("per unit 50rs.\n");
					total=unit*50;
					printf("total bill is:%d",total);
				}
			}
		}
	}
}