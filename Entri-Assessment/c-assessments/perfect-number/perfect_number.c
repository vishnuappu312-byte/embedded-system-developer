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
 A perfect number uses proper divisors, which exclude the number itself. */