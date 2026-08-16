#include<stdio.h>
#include<string.h>
void main()
{
	char str[40]="vijay";
	strrchr(str,'i');
	printf("%s",strrchr(str,'i'));
}