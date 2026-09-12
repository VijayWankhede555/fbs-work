#include <stdio.h>
void calculateSP(float cp,float discount);
int main()
{
    float cp, discount;
    printf("Enter Cost Price: ");
    scanf("%f",&cp);
    printf("Enter Discount: ");
    scanf("%f",&discount);
    calculateSP(cp,discount);
  
}
void calculateSP(float cp,float discount)
{
    float sp;

    if(cp>0)
    {
        if(discount>=0&&discount<=100)
        {
            sp=cp-(cp*discount/100);
            printf("Selling Price=%.2f",sp);
        }
        else
        {
            printf("Invalid Discount");
        }
    }
    else
    {
        printf("Invalid Cost Price");
    }
}
