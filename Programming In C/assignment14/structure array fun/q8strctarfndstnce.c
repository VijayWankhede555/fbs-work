#include<stdio.h>
typedef struct distance
{
	float feet;
	float inch;
}distance;
void displaydistance(distance*darr,int size);
void storedistance(distance*darr,int size);
void main()
{
 distance darr[5];
 distance dbrr[10];
 distance dcrr[15];
 storedistance(darr,5);
 storedistance(dbrr,10);
 storedistance(dcrr,15);
 displaydistance(darr,5);
 displaydistance(dbrr,10);
 displaydistance(dcrr,15);
}
void storedistance(distance*darr,int size)
{
	for(int i=0;i<size;i++)
 {
 printf("feet: ");
 scanf("%f",&darr[i].feet);
 printf("inch: ");
 scanf("%f",&darr[i].inch);
 }
}
void displaydistance(distance*darr,int size)
{
	 for(int i=0;i<size;i++)
 {
  printf("feet:%f\n",darr[i].feet);
  printf("inch:%f\n",darr[i].inch);
 }
}