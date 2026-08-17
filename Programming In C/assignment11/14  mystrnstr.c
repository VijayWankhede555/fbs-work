#include<stdio.h>
char* mystrnstr(char*str,char*sub,int n);
void main()
{
	char st[]="hello fbs";
	char str[]="fbs";
	char* ch=mystrnstr(st,str,9);
	printf("%s",ch);
}
char* mystrnstr(char*str,char*sub,int n)
{
    int i,j;

    for (i=0;i< n&&str[i]!='\0';i++)
    {
        for (j=0;sub[j]!='\0';j++)
        {
            if (i+j>=n||str[i+j]!=sub[j])
            {
                break;
            }
        }

        if (sub[j]=='\0')
        {
            return&str[i];
        }
    }
    return NULL;
}