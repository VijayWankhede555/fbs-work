#include<stdio.h>
struct date
{
	int date;
	int month;
	int year;
};
void main()
{
  struct date darr[5];
  for(int i=0;i<5;i++)
 {
  printf("enter date: ");
  scanf("%d",&darr[i].date);
  printf("month: ");
  scanf("%d",&darr[i].month);
  printf("year: ");
  scanf("%d",&darr[i].year);
 }
  for(int i=0;i<5;i++)
  {
  	printf("date:%d\n",darr[i].date);
  printf("month:%d\n",darr[i].month);
  printf("year:%d\n",darr[i].year);	
  }
  
} 