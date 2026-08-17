#include<stdio.h>
void mystrcpy(char*desti,char*src);
void main()
{
	char src[]="hello";
	char src1[40];
	mystrcpy(src1,src);
	printf("%s",src1); 
}
void mystrcpy(char* desti,char*src)
{
	int i=0;
	while(src[i]!='\0')
	{
		desti[i]=src[i];
		i++;
	}
	desti[i]='\0';
}