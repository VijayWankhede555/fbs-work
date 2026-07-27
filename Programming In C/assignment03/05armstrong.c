#include<stdio.h>
void main()
{
    int n=153;
    int temp=n;
    int num,sum = 0;

    while(temp>0)
    {
        num=temp % 10;
        sum=sum+(num*num*num);
        temp=temp/10;
    }

    if(sum==n)
    {
        printf("Armstrong");
     }
     else
      {
        printf("Not Armstrong");
       }
}