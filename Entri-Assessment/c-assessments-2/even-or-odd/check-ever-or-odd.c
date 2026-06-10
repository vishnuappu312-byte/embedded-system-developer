#include <stdio.h>

int main()
{
    int num;

    printf("Enter an integer: ");
    scanf("%d", &num);

    if (num % 2 == 0)
    {
        printf("%d is even.\n", num);
    }
    else
    {
        printf("%d is odd.\n", num);
    }

    return 0;
}
/* how it works:
1. The program first prompts the user to enter an integer and reads it into the variable num.
2. It then checks if the number is divisible by 2 (i.e., if the remainder when divided by 2 is 0).
3. If the number is divisible by 2, it prints that the number is even.
4. Otherwise, it prints that the number is odd.
example: If the user enters 4, the output will be "4 is even." If the user enters 7, the output will be "7 is odd."


*/