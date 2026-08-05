#include <stdio.h>

int main()
{
    int i,n,temp,sum,num,count,power,j;

    printf("Enter num: ");
    scanf("%d",&n);
    for(i=1;i<=n;i++)
    {
        temp = i;
        count = 0;
        while(temp > 0)
        {
            count++;
            temp=temp/10;
        }

        temp=i;
        sum=0;
        while(temp>0)
        {
            num=temp%10;
            power=1;

            for(j=1;j<=count;j++)
            {
                power=power*num;
            }

            sum=sum+power;
            temp=temp/10;
        }

        if(sum==i)
        {
            printf("%d\n",i);
        }
    }

    return 0;
}