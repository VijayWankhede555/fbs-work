#include<stdio.h>
void main()
{
	char str[50];
	char str1[100];
	int i,count=0,count1=0;
	printf("enter a string 1st: ");
    scanf("%s",str);
	printf("enter a string 2nd: ");
	scanf("%s",str1);
	for(i=0;str[i]!='\0';i++)
	{
		if(str[i]!='\n')
		{
		
	     	count++;
    	}
	}
	for(i=0;str1[i]!='\0';i++)
	{
		if(str[i]!='\n')
		{
			count1++;
		}
	}
	if(count>count1)
	{
		printf("string 1st is bigger");
	}
	else 
	{
	 if(count1>count)
	  {
		printf("string 2nd is bigger");
	  }
	  else
	   {
		printf("both are equal");
	   }
    }
	
}