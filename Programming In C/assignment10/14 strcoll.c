#include<stdio.h>
#include<string.h>
void main()
{
	char str[10]="Vijay";
	char str1[8]="Viraj";
	strcoll(str,str1);
	printf("%d",strcoll(str,str1));
}