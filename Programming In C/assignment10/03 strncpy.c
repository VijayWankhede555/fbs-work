#include<stdio.h>
#include<string.h>
void main()
{
	char str[]="frist bit";
	char str1[20];
	strncpy(str1,str,5);
	printf("%s",str1);
}