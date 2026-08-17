#include<stdio.h>
char mystrrchr(char*a,char ch);
void main()
{
   char p[10]="bajaj";
   char c=mystrrchr(p,'j');
   printf("%c",c);	
}
char mystrrchr(char*a,char ch)
{
	char last='\0';
	while(*a!='\0')
	{
		if(*a==ch)
		{
			last=*a;
		}
		a++;
	}
	return last;
}