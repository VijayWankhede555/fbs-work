#include<stdio.h>
typedef struct date
{
	int date;
	int month;
	int year;
}date;
void storedate(date*darr,int size);
void displaydate(date*darr,int size);
void main()
{
   date darr[5];
   date dbrr[10];
   date dcrr[15];
  printf("enter\n");
  storedate(darr,5);
  storedate(dbrr,10);
  storedate(dcrr,15);
  displaydate(darr,5);
   displaydate(dbrr,10);
    displaydate(dcrr,15);
}
void storedate(date*darr,int size)
{ for(int i=0;i<size;i++)
 {
  printf("enter date: ");
  scanf("%d",&darr[i].date);
  printf("month: ");
  scanf("%d",&darr[i].month);
  printf("year: ");
  scanf("%d",&darr[i].year);
 }
 }
void displaydate(date*darr,int size)
{
	for(int i=0;i<size;i++)
  {
  	printf("date:%d\n",darr[i].date);
  printf("month:%d\n",darr[i].month);
  printf("year:%d\n",darr[i].year);	
  }
}  
















