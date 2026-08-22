#include<stdio.h>
void main()
{
	char str[100];
	char temp;
	int i;
	printf("enter string: ");
	scanf("%s",str);
	for(i=0;str[i]!='\0';i++);
//	{
//	}
		temp=str[0];
		str[0]=str[i-1];
		str[i-1]=temp;
	
	printf("new string %s",str);
}