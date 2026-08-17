#include <stdio.h>
void mystrrev(char *str);
void main()
{
    char str[20] ="VIJAY";
    mystrrev(str);
    printf("%s", str);
}
void mystrrev(char *str)
{
    char *start = str;
    char *end = str;
    char temp;
    while (*end != '\0')
    {
        end++;
    }
    end--;

    while (start < end)
    {
        temp = *start;
        *start = *end;
        *end = temp;
        start++;
        end--;
    }
}