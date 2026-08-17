#include<stdio.h>
char mystrchr(char*p,char ch);
void main()
{
	char p[10]="vijay";
	char i=mystrchr(p,'i');
	printf("%c",i);
}
char mystrchr(char*p,char ch)
{
	while(*p!='\0')
	{
		if(*p==ch)
		{
			return *p;
		}
		p++;
	}
}