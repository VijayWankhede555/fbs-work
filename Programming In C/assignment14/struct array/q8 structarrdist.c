#include<stdio.h>
struct distance
{
	float feet;
	float inch;
};
void main()
{
 struct distance darr[5];
 for(int i=0;i<5;i++)
 {
 printf("feet: ");
 scanf("%f",&darr[i].feet);
 printf("inch: ");
 scanf("%f",&darr[i].inch);
 }
 for(int i=0;i<5;i++)
 {
  printf("feet:%f\n",darr[i].feet);
  printf("inch:%f\n",darr[i].inch);
 }
 	
}