#include <stdio.h>
#include <stdbool.h>

void printFibonacci(int n)
{
    int a = 0, b = 1, c;

    printf("Fibonacci Series: ");

    for (int i = 0; i < n; i++)
    {
        printf("%d ", a);
        c = a + b;
        a = b;
        b = c;
    }
    printf("\n");
}
int main()
{
    int n;

    printf("Enter the number of terms in the Fibonacci series: ");
    scanf("%d", &n);

    if (n <= 0)
    {
        printf("Please enter a positive integer.\n");
    }
    else
    {
        printFibonacci(n);
    }

    return 0;
}
/*The Fibonacci series is a sequence of numbers where each number is the sum of the two preceding ones, usually starting with 0 and 1.*/
