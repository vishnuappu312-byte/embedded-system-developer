#include<stdio.h>
int main()
{
    int num, i;

    long long factorial = 1;

    printf("Enter a positive integer: ");
    scanf("%d", &num);

    for (i = 1; i <= num; i++)
    {
        factorial *= i;
    }
    printf("Factorial of %d is %lld\n", num, factorial);

    return 0;
}

/*Factorial of a number is the product of all positive integers less than or equal to the number.*/