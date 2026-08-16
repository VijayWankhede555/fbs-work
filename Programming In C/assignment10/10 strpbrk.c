#include<stdio.h>
#include<string.h>
void main()
{
	char str[32]="vijay patil";
	strpbrk(str,"i");
	printf("%s",strpbrk(str,"i"));
}