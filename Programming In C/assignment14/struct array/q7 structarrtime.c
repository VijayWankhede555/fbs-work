#include<stdio.h>
struct time
{
 int hr;
 int min;
 int sec;	
};
void main()
{
 struct time tarr[5];
 for(int i=0;i<5;i++)
 {
  printf("hour:");
  scanf("%d",&tarr[i].hr);
  printf("min: ");
  scanf("%d",&tarr[i].min);
  printf("sec: ");
  scanf("%d",&tarr[i].sec);
 }
 for(int i=0;i<5;i++)
 {
 printf("hour:%d",tarr[i].hr);
 printf("min:%d",tarr[i].min);
 printf("sec:%d",tarr[i].sec);
 }
}