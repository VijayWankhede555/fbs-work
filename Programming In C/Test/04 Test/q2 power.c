#include<stdio.h>
#include<math.h>
void main()
{
	int num,power,res;
	printf("enter number:");
	scanf("%d",&num);
	printf("enter power:");
	scanf("%d",&power);
	res= pow(num,power);
	printf("result:%d",res);
}