#include <stdio.h>
int mystrcasecmp(char *str1, char *str2);
void main()
{
    char str1[] = "Hello";
    char str2[] = "HELLO";

    int res = mystrcasecmp(str1, str2);
      printf("%d",res);
}
int mystrcasecmp(char*str1,char*str2)
{
    while (*str1!='\0'&&*str2!='\0')
    {
        char ch1 = *str1;
        char ch2 = *str2;
        if (ch1 >= 'A' && ch1 <= 'Z')
        {
		
            ch1 = ch1 + 32;
        }
        if (ch2 >= 'A' && ch2 <= 'Z')
         {
         	ch2 = ch2 + 32;
		 }
        if (ch1 != ch2)
        {
            return ch1 - ch2;
        }
        str1++;
        str2++;
    }
    return *str1 - *str2;
}