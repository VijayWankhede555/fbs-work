#include<stdio.h>
int mystrlen(char*str);
void main()
{
	char str[]="heyy";
	int a=mystrlen(str);
	printf("%d",a);
}
int mystrlen(char*str)
{
	int count=0;
	while(str[count]!='\0')
	{
		count++;
	}
	return count;
	
}