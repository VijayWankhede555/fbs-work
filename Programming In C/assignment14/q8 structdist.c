#include<stdio.h>
struct distance
{
	float feet;
	float inch;
};
void main()
{
 struct distance d1;
 printf("feet: ");
 scanf("%f",&d1.feet);
 printf("inch: ");
 scanf("%f",&d1.inch);
 
 printf("feet:%f\n",d1.feet);
 printf("inch:%f\n",d1.inch);

 	
}