#include<stdio.h>
#include<string.h>
void main()
{
	char str[20]="vijay wankhede";
	char str1[20];
      memcpy(str1,str,strlen(str)+1);
	printf("%s",str1);
}