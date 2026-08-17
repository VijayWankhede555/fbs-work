#include <stdio.h>
int mystrncasecmp(char *str1, char *str2, int n);
void main()
{
    char str1[] = "HelloWorld";
    char str2[] = "HELLOabc";
    int res=mystrncasecmp(str1, str2, 5);
    printf("%d",res);
}

int mystrncasecmp(char *str1, char *str2, int n)
{
    int i = 0;
    char ch1, ch2;

    while (i < n)
    {
        ch1 = *str1;
        ch2 = *str2;
        if (ch1 >= 'A' && ch1 <= 'Z')
            ch1 = ch1 + 32;
        if (ch2 >= 'A' && ch2 <= 'Z')
            ch2 = ch2 + 32;
        if (ch1 != ch2)
        {
            return ch1 - ch2;
        }
        if (*str1 == '\0' || *str2 == '\0')
        {
            return 0;
        }
        str1++;
        str2++;
        i++;
    }
    return 0;
}