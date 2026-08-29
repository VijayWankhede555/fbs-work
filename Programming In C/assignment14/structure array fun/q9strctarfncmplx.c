#include<stdio.h>
typedef struct complex
{
	int image;
	int real;
}complex;
void storecomplex(complex*carr,int size);
void displaycomplex(complex*carr,int size);
void main()
{
	struct complex carr[5];
	       complex cbrr[15];
	storecomplex(carr,5);
	storecomplex(cbrr,15);
	displaycomplex(carr,5);
	displaycomplex(cbrr,15);
}
void storecomplex(complex*carr,int size)
{
	for(int i=0;i<size;i++)
   {
	printf("imaginary: ");
	scanf("%d",&carr[i].image);
	printf("real: ");
	scanf("%d",&carr[i].real);
   }
}
void displaycomplex(complex*carr,int size)
{
	for(int i=0;i<size;i++)
	{
	 printf("imaginary:%d\n",carr[i].image);
	 printf("real:%d\n",carr[i].real);
    }
}