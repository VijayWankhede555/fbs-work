#include<stdio.h>
void main()
{
	int num,num1,j;
	printf("enter number:");
	scanf("%d",&num);
	printf("enter 2nd number:");
	scanf("%d",&num1);
	while(num<=num1)
	{
		printf("%d",num);
		j=1;
		while(j<=num)
		{
		    if(num%j==0)
			{
				printf("%d",j);
				}	
				j++;
	    }
	    printf("\n");
	    num++;
	}
}