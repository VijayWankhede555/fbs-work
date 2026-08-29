#include<stdio.h>
struct distance
{
	int feet,inch;
};
struct distance sdistance();
void displaydistance(struct distance d1);
void main()
{
	struct distance d1;
	d1=sdistance();
	displaydistance(d1);
}
struct distance sdistance()
{
	struct distance d;
	printf("feet: ");
	scanf("%d",&d.feet);
	printf("inch: ");
	scanf("%d",&d.inch);
	d.feet=d.feet+d.inch/12;
	d.inch=d.inch%12;
	return d;	 
}
void displaydistance(struct distance d1)
{
	printf("feet:%d,inch:%d",d1.feet,d1.inch);
}