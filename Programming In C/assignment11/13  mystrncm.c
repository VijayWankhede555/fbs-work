#include <stdio.h>
int mystrncmp(char *str1, char *str2, int n);
void main()
{
    char str1[] = "Hello";
    char str2[] = "Hello";

    int res = mystrncmp(str1, str2, 3);
      printf("%d",res);
}

int mystrncmp(char *str1, char *str2, int n)
{
    int i = 0;
    while (i < n)
    {
        if (*str1 != *str2)
        {
            return *str1 - *str2;
        }
        if (*str1 == '\0')
        {
            return 0;
        }
        str1++;
        str2++;
        i++;
    }
    return 0;
}