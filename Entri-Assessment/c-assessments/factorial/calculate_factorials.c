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

/*Factorial of a number is the product of all positive integers less than or equal to the number.
how it works:
1. The program first prompts the user to enter a positive integer and reads it into the variable num.
2. It initializes a variable factorial to 1, which will be used to store the result of the factorial calculation.
3. The program uses a for loop that starts from 1 and continues up to the value of num. In each iteration, it multiplies the current value of factorial by the loop variable i, which represents the current integer in the sequence.
4. After the loop completes, the variable factorial contains the result of num! (num factorial).
5. Finally, the program prints the factorial of the entered number using the %lld format specifier to display the long long integer result.
example: If the user enters 5, the program will calculate factorial as follows:
- Start with factorial = 1
- For i = 1: factorial = 1 * 1 = 1
- For i = 2: factorial = 1 * 2 = 2
- For i = 3: factorial = 2 * 3 = 6
- For i = 4: factorial = 6 * 4 = 24
- For i = 5: factorial = 24 * 5 = 120
Thus, the final output will be "Factorial of 5 is 120". 


*/