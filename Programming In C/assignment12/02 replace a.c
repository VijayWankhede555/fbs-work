#include<stdio.h>
void main()
{
	char str[]="marko";
	int i;
    for(i=0;str[i]!='\0';i++)
    {
    	if(str[i]=='a')
    	{
    		str[i]='$';
		}
	}
	printf("%s",str);
	
}