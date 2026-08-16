#include<stdio.h>
#include<string.h>
void main()
{
	char str[20]="vijay";
	memset(str,'*',5);
	printf("%s",str);
}