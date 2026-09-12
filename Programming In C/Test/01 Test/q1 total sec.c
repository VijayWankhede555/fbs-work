#include<stdio.h>
void main()
{
	int hr,min,sec,total;
	printf("enter hour:");
	scanf("%d",&hr);
	printf("enter minute:");
	scanf("%d",&min);
	printf("enter second:");
	scanf("%d",&sec);
	total=(hr*3600)+(min*60)+sec;
	printf("total second is:%d",total);
}