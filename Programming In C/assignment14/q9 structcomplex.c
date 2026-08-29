#include<stdio.h>
struct complex
{
	int image;
	int real;
};
void main()
{
	struct complex c1;
	printf("imaginary: ");
	scanf("%d",&c1.image);
	printf("real: ");
	scanf("%d",&c1.real);
	
	printf("imaginary:%d\n",c1.image);
	printf("real:%d\n",c1.real);
}