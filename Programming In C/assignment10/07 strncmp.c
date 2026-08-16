#include<stdio.h>
#include<string.h>
void main()
{
	char str[40]="frist ";
	char str1[15]="bit solution";
	strncmp(str,str1,3);
	printf("%d",strncmp(str,str1,3));
}