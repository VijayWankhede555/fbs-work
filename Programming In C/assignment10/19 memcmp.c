#include<stdio.h>
#include<string.h>
void main()
{
	char str[50]="hello";
	char str1[50]="vijay";
     memcmp(str,str1,5);
	printf("%d",memcmp(str, str1, 5));
}