#include<stdio.h>
void mystrcat(char*str1,char*str2);
void main()
{
  char str[50]="vijay";
  char str1[15]="wankhede";
  	mystrcat(str,str1);  
  	printf("%s",str);
}
void mystrcat (char*str1,char*str2)  
{
	while(*str1!='\0')
	{
		*str1++;
	}
	
	while(*str2!='\0')
	{
		*str1=*str2;
		*str1++;
		*str2++;
	}
	str1='\0';
}