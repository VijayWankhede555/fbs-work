#include <stdio.h>
void mystrncat(char *str1, char *str2, int n);
int main()
{
    char str1[30] = "Hello";
    char str2[] = "World";
    mystrncat(str1, str2, 3);
    printf("%s", str1);
}
void mystrncat(char *str1, char *str2, int n)
{
    int i = 0;
    while (*str1 != '\0')
    {
        str1++;
    }
    while (i < n && *str2 != '\0')
    {
        *str1 = *str2;
        str1++;
        str2++;
        i++;
    }
    *str1 = '\0';
}