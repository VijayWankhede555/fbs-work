#include<stdio.h>
#include<string.h>
void main()
{
	char str[100];
	int i,fact=0;
	char ch;
	printf("enter string :");
	scanf("%s",str);
	printf("enter charector: ");
	scanf("%c",&ch);
	for(i=0;str[i]!='\0';i++)
	{
		if(str[i]==ch)
		{
			printf("charector %c is found at position %d",ch,i);
			fact=1;
		}
	}
	if(fact==0)
	{
		printf("charector %c is not found");
	}
}