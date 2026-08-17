#include<stdio.h>
void mystrlower(char*str);
void main()
{
	char str[12]="HELLO";
	mystrlower(str);
	printf("%s",str);
}
void mystrlower(char*str)
{
	while(*str!='\0')
	{
		if(*str>='A'&&*str<='Z')
		{
			*str=*str+32;
		}
		str++;
	}
  }  