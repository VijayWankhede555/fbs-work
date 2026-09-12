#include<stdio.h>
void rev(char str[]);
void main()
{
	char str[8];
	printf("enter string:");
	scanf("%s",str);
	printf("revers string:\n");
	rev(str);	
}
void rev(char str[])
{
    int len=0;
    while(str[len]!='\0')
    {
        len++;
    }
    for(int i=len-1;i>=0;i--)
    {
        printf("%c",str[i]);
    }
}



