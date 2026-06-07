#include<stdio.h>

float num1, num2, result;
char operator;


float sum(float a, float b)
{
    return a + b;
}
float difference(float a, float b)
{
    return a - b;
}
float product(float a, float b)
{
    return a * b;
}


float quotient(float a, float b)
{
    if (b != 0)
    {
        return (float)a / b;
    }
    else
    {
        printf("Error: Division by zero is not allowed.\n");
        return 0; // Return 0 or handle as needed
    }
}

int main()
{
    printf("Enter first number: ");
    scanf("%f", &num1);

    printf("Enter an operator (+, -, *, /): ");
    scanf(" %c", &operator);

    printf("Enter second number: ");
    scanf("%f", &num2);

    switch (operator)
    {
        case '+':
            result = sum(num1, num2);
            break;
        case '-':
            result = difference(num1, num2);
            break;
        case '*':
            result = product(num1, num2);
            break;
        case '/':
            if (num2 != 0)
            {
                result = quotient(num1, num2);
            }
            else
            {
                printf("Error: Division by zero is not allowed.\n");
                return 1;
            }
            break;
        default:
            printf("Error: Invalid operator.\n");
            return 1;
    }

    printf("Result: %.4f\n", result);
    return 0;
}


