#include <stdio.h>
void main()
{
    int num, num1;
    char op;

    printf("Enter first number: ");
    scanf("%d", &num);

    printf("Enter second number: ");
    scanf("%d", &num1);

    printf("Enter operator (+,-,*,/,%%): ");
    scanf(" %c", &op);

    if(op == '+')
        printf("Result = %d", num + num1);

    else if(op == '-')
        printf("Result = %d", num - num1);

    else if(op == '*')
        printf("Result = %d", num * num1);

    else if(op == '/')
    {
        if(num1 != 0)
            printf("Result = %d", num / num1);
        else
            printf("Division by zero is not possible.");
    }

    else if(op == '%')
    {
        if(num1 != 0)
            printf("Result = %d", num % num1);
        else
            printf("Modulo by zero is not possible.");
    }

    else
    {
        printf("Invalid operator.");
    }

    
}