#include<stdio.h>
typedef struct time
{
	int hr,min,sec;
}time;
void main()
{
	time d1;
	printf("enter time\n");
	printf("hr:");
	scanf("%d",&d1.hr);
	printf("min:");
	scanf("%d",&d1.min);
	printf("sec:");
	scanf("%d",&d1.sec);
	d1.min=d1.min+d1.sec/60;
    d1.sec=d1.sec%60;
    d1.hr=d1.hr+d1.min/60;
    d1.min=d1.min%60;
	printf("hr:%d",d1.hr);
	printf("min:%d",d1.min);
	printf("sec:%d",d1.sec);
}