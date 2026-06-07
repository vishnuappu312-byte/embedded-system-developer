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
/*The Fibonacci series is a sequence of numbers where each number is the sum of the two preceding ones, usually starting with 0 and 1.
how it works:
1. The program first prompts the user to enter the number of terms in the Fibonacci series and reads it into the variable n.
2. It checks if n is less than or equal to 0. If it is, the program prints a message asking the user to enter a positive integer and exits.
3. If n is a positive integer, the program calls the printFibonacci function, passing n as an argument.
4. The printFibonacci function initializes two variables, a and b, to represent the two preceding numbers in the Fibonacci sequence, starting with 0 and 1.
5. It then uses a for loop to iterate n times, printing the current value of a in each iteration.
6. Inside the loop, it calculates the next number in the sequence (c) by adding a and b, then updates a to be b and b to be c for the next iteration.
7. After the loop completes, the function prints a newline character to end the output.
Example: If the user enters 10, the output will be "Fibonacci Series: 0 1 1 2 3 5 8 13 21 34". This shows the first 10 terms of the Fibonacci series.


*/
