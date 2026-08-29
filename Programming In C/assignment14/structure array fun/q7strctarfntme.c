#include<stdio.h>
typedef struct time
{
 int hr;
 int min;
 int sec;	
}time;
void storetime(time*tarr,int size);
void displaytime(time*tarr,int size);
void main()
{
 struct time tarr[5];
        time tbrr[10];
        time tcrr[15];
   storetime(tarr,5);
   storetime(tbrr,10);
   storetime(tcrr,15);
   displaytime(tarr,5);
   displaytime(tbrr,10);
   displaytime(tcrr,15);
}
void storetime(time*tarr,int size)
{
	for(int i=0;i<size;i++)
 {
  printf("hour:");
  scanf("%d",&tarr[i].hr);
  printf("min: ");
  scanf("%d",&tarr[i].min);
  printf("sec: ");
  scanf("%d",&tarr[i].sec);
 }
}
void displaytime(time*tarr,int size)
{
	for(int i=0;i<size;i++)
 {
 printf("hour:%d",tarr[i].hr);
 printf("min:%d",tarr[i].min);
 printf("sec:%d",tarr[i].sec);
 }
}