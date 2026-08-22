#include<stdio.h>
void main()
{
	char str[60];
	int i,count=0;
	printf("enter a string: ");
	fgets(str,sizeof(str),stdin);
	for(i=0;str[i]!='\0';i++)
	{
		if(str[i]=='a'||str[i]=='e'||str[i]=='i'||str[i]=='o'||str[i]=='u'||
		   str[i]=='A'||str[i]=='E'||str[i]=='I'||str[i]=='O'||str[i]=='U')
		   {
		   	count++;
		   }
		   
	}
	printf("vowel is %d",count);
}