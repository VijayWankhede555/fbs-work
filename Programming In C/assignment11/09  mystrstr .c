#include <stdio.h>
char *mystrstr(char *str, char *sub);
void main()
{
    char str[] = "hello fbs";
    char sub[] = "fbs";
    char *result = mystrstr(str, sub);
    printf("%s",result);
}
char *mystrstr(char *str, char *sub)
{
    char *p1;
    char *p2;
    while (*str != '\0')
    {
        p1 = str;
        p2 = sub;
        while (*p1 == *p2 && *p2 != '\0')
        {
            p1++;
            p2++;
        }
        if (*p2 == '\0')
        {
            return str;
        }
        str++;
    }
    return NULL;
}