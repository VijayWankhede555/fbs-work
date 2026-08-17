#include<stdio.h>
void mystrupper(char*str);
void main()
{
	char s[10]="vijay";
	 mystrupper(s);
	 printf("%s",s);
}
void mystrupper(char* str)
{
	while(*str !='\0')
	{
		if(*str>='a'&&*str<='z')
		{
			*str=*str-32;
		}
		str++;
	}
	
}