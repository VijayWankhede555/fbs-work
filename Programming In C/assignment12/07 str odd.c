#include<stdio.h>
void main()
{
	char str[65];
	int i;
	printf("enter string: ");
	scanf("%s",str);
	for(i=0;str[i]!='\0';i++)
	{
		if(i%2==0)
		{
			printf("%c",str[i]);
		}
	}
}