#include<stdio.h>
struct time
{
 int hr;
 int min;
 int sec;	
};
void main()
{
 struct time t1;
 printf("hour:");
 scanf("%d",&t1.hr);
 printf("min: ");
 scanf("%d",&t1.min);
 printf("sec: ");
 scanf("%d",&t1.sec);
 
 printf("hour:%d",t1.hr);
 printf("min:%d",t1.min);
 printf("sec:%d",t1.sec); 	
}