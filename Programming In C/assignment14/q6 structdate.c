#include<stdio.h>
struct date
{
	int date;
	int month;
	int year;
};
void main()
{
  struct date d1;
  printf("enter date: ");
  scanf("%d",&d1.date);
  printf("month: ");
  scanf("%d",&d1.month);
  printf("year: ");
  scanf("%d",&d1.year);
  
  printf("date:%d\n",d1.date);
  printf("month:%d\n",d1.month);
  printf("year:%d\n",d1.year);	
} 