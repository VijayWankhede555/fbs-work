#include<stdio.h>
struct complex
{
	int image;
	int real;
};
void main()
{
	struct complex carr[5];
	for(int i=0;i<5;i++)
   {
	printf("imaginary: ");
	scanf("%d",&carr[i].image);
	printf("real: ");
	scanf("%d",&carr[i].real);
   }
	for(int i=0;i<5;i++)
	{
	 printf("imaginary:%d\n",carr[i].image);
	 printf("real:%d\n",carr[i].real);
    }
}