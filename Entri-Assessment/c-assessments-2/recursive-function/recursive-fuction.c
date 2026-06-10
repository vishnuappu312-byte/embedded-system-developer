#include <stdio.h>

int num_1, num_2;
int gcd(int a, int b)
{
    if (b == 0)
    {
        return a;
    }
    return gcd(b, a % b);
}
int main()
{
    printf("Enter two positive integers: ");
    scanf("%d %d", &num_1, &num_2);

    if (num_1 <= 0 || num_2 <= 0)
    {
        printf("Please enter positive integers.\n");
        return 1;
    }

    int result = gcd(num_1, num_2);
    printf("The GCD of %d and %d is: %d\n", num_1, num_2, result);

    return 0;
}
/* This is a recursive function to find the GCD of two numbers using the Euclidean algorithm. 
The recursive Euclidean Algorithm. If the second number becomes zero, the first number is the GCD. Otherwise, I recursively call the function with (b, a % b) until the remainder becomes zero.*/
//GCD(a,b) = GCD(b, a%b)
// use of % operator to find the remainder of a divided by b.
/*


*/