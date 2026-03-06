#include <stdio.h>

int main()
{
    char op;
    float num1, num2, result;

    printf("Enter operator (+, -, *, /): ");
    scanf(" %c", &op);

    printf("Enter two numbers: ");
    scanf("%f %f", &num1, &num2);

    switch(op)
    {
        case '+':
            result = num1 + num2;
            printf("Result = %.2f\n", result);
            break;

        case '-':
            result = num1 - num2;
            printf("Result = %.2f\n", result);
            break;

        case '*':
            result = num1 * num2;
            printf("Result = %.2f\n", result);
            break;

        case '/':
            if(num2 == 0)
                printf("Error: Division by zero not allowed!\n");
            else
            {
                result = num1 / num2;
                printf("Result = %.2f\n", result);
            }
            break;

        default:
            printf("Invalid Operator!\n");
    }

    return 0;
}
