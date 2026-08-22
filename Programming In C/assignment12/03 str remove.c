#include<stdio.h>
void main()
{
	char str[60];
	int i,n;
	printf("enter string: ");
	scanf("%s",str);
	printf("enter number: ");
	scanf("%d",&n);
	for(i=n;str[i]!='\0';i++)
	{
	  str[i]=str[i+1];	
	}
	printf("after removing string:%s",str);
}