#include<stdio.h>
void mystrncpy(char*str,char*scr,int n);
void main()
{
	char s[15]="hello";
	char str[30]="fbs institute";
	mystrncpy(s,str,3);
	printf("%s",s);
}
void mystrncpy(char*str,char*scr,int n)
{
	int i=0;
	while(i<n&&*scr!='\0')
	{
		*str=*scr;
        str++;
        scr++;
        i++;
	}
	*str='\0';
}