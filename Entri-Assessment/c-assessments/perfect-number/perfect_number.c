#include<stdio.h>

/*A perfect number is a positive integer that is equal to the sum of its proper divisors, excluding itself. For example, 6 is a perfect number because its proper divisors are 1, 2, and 3, and their sum is 6 (1 + 2 + 3 = 6).*/
int main()
{
    int num, i;
int sum = 0;
    printf("Enter a positive integer: ");
    scanf("%d", &num);

    printf("Factors of %d are: ", num);
    for (i = 1; i < num; i++)
    {
        if (num % i == 0)
        {
            printf("%d ", i);
                sum += i;
        }
    }
    printf("\nSum of factors: %d\n", sum);
    if (sum == num)
    {
        printf("%d is a perfect number.\n", num);
    }
    else
    {
        printf("%d is not a perfect number.\n", num);
    }

    return 0;
}

/* A perfect number is a positive integer that is equal to the sum of its proper divisors, excluding itself. For example, 6 is a perfect number because its proper divisors are 1, 2, and 3, and their sum is 6 (1 + 2 + 3 = 6).
 A perfect number uses proper divisors, which exclude the number itself. 
 how it works:
1. The program first prompts the user to enter a positive integer and reads it into the variable num.
2. It initializes a variable sum to 0, which will be used to store the sum of the proper divisors.
3. The program uses a for loop to iterate from 1 to num-1 (inclusive) to find the proper divisors of num. In each iteration, it checks if the current value of i is a divisor of num by checking if num % i == 0.
4. If i is a divisor of num, it is printed as a factor, and its value is added to the sum variable.
5. After the loop completes, the program prints 

 
 
 */