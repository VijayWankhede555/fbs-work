#include<stdio.h>
#include<string.h>
void main()
{
	char str[20]="hello vijay";
	strcspn(str," ");
	printf("%d",strcspn(str," "));
}