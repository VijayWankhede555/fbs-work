#include<stdio.h>
#include<string.h>
void main()
{
	char str[50]="vijay wankhede";
       memmove(str + 14, str, 14);
	printf("%s",str);
}