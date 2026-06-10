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

/*
how  its work?
1. The program starts by declaring three float variables: num1, num2, and result, and a char variable operator to store the user's input.
2. The user is prompted to enter the first number, which is read and stored in num1.
3. The user is then prompted to enter an operator (+, -, *, /), which is read and stored in the operator variable.  Note the space before %c in scanf to consume any leftover whitespace.
4. The user is prompted to enter the second number, which is read and stored in num2.
5. A switch statement is used to determine which arithmetic operation to perform based on the operator entered by the user. The corresponding function (sum, difference, product, or quotient) is called with num1 and num2 as arguments, and the result is stored in the result variable.
6. If the operator is division and num2 is zero, an error message is printed, and the program exits with a non-zero status to indicate an error.
7. If the operator is invalid (not one of +, -, *, /), an error message is printed, and the program exits with a non-zero status to indicate an error.
8. Finally, if the operation is successful, the result is printed to the user with four decimal places, and the program exits with a status of 0 to indicate successful completion.



*/
