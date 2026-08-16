#include<stdio.h>
#include<string.h>
void main()
{
	char str[40]="frist,bit,solution";
	char* token=strtok(str,",");
	while(token!=NULL)
	{
		printf("%s\n",token);
		token=strtok(NULL,",");
	}

}