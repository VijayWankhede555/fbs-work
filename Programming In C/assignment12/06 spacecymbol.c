#include<stdio.h>
void main()
{
	char str[55];
	int i;
	printf("enter string: ");
	fgets(str,sizeof(str),stdin);
	for(i=0;str[i]!='\0';i++)
	{
		if(str[i]==' ')
		{
			str[i]='$';
		}
	}
	printf("new strig %s",str);
}