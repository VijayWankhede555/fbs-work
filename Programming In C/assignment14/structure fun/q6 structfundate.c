#include<stdio.h>
struct date
{
	int day,mon,yr;
};
struct date seedate();
void displaydate(struct date d1);
void main()
{
	struct date d1;
    d1=seedate();
    displaydate(d1);
}
struct date seedate()
{
	struct date d;
	printf("day:");
	scanf("%d",&d.day);
	printf("month:");
	scanf("%d",&d.mon);
	printf("year:");
	scanf("%d",&d.yr);
	return d;
}
void displaydate(struct date d1)
{
	printf("day:%d\n",d1.day);
	printf("month:%d\n",d1.mon);
	printf("year:%d",d1.yr);
	
}