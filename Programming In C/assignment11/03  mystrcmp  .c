#include<stdio.h>
int mystrcmp(char*str1,char*str2);
void main()
{
	char str[]="hlo";
	char str1[]="hlo";
	int a=mystrcmp(str,str1);
	printf("%d",a);
}
int mystrcmp(char*str1,char*str2)  
{
	while(*str1!='\0'&&*str2!='\0')
	{
		if(*str1!=*str2)
		{
			return *str1-*str2;
		}
		str1++;
		str2++;
	}
	return *str1=*str2;
}