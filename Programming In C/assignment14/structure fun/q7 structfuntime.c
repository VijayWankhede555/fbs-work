#include<stdio.h>
struct time 
{
	int hr,min,sec;
};
void displaytime(struct time t1);
struct time sttime();
void main()
{
	struct time t1;
	t1=sttime();
	displaytime(t1);
}
struct time sttime()
{
	struct time t;
	printf("hr:");
	scanf("%d",&t.hr);
	printf("min:");
	scanf("%d",&t.min);
	printf("sec:");
	scanf("%d",&t.sec);
	return t;
}
void displaytime(struct time t1)
{
	printf("hour:%d,min:%d,sec:%d",t1.hr,t1.min,t1.sec);
}