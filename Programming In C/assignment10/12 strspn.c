#include<stdio.h>
#include<string.h>
void main()
{
	char str[10]="1234hello";
	strspn(str,"123456789");
	printf("%zu",strspn(str,"123456789"));
}