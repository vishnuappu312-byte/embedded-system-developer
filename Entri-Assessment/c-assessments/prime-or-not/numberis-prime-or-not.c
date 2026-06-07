#include <stdio.h>

int main()
{
    int num, i, isPrime = 1;

    printf("Enter a positive integer: ");
    scanf("%d", &num);

    if (num <= 1)
    {
        isPrime = 0;
    }
    else
    {
        for (i = 2; i <= num / 2; i++)
        {
            if (num % i == 0)
            {
                isPrime = 0;
                break;
            }
        }
    }

    if (isPrime)
    {
        printf("%d is a prime number.\n", num);
    }
    else
    {
        printf("%d is not a prime number.\n", num);
    }

    return 0;
}

/*A prime number is a number greater than 1 that is divisible only by 1 and itself.
In the program, a for loop checks whether the number can be divided exactly by any number from 2 to num/2.*/