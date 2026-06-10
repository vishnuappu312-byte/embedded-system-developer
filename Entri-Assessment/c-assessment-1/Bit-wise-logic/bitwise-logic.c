#include <stdio.h>

void decbin(int num)
{
    for(int i = 7; i >= 0; i--)
    {
        if(num & (1<<i))
            printf("1");
        else
            printf("0");
    }
}

int setbit(int num, int pos)
{
    return num | (1<<pos);
}

int clearbit(int num, int pos)
{
    return num & ~(1<<pos);
}

int togglebit(int num, int pos)
{
    return num ^ (1<<pos);
}

int main()
{
    int num;
    printf("enter number : ");
    scanf("%d",&num);

    printf("Original : ");
    decbin(num);

    num = setbit(num,3);
    printf("\nSet bit : ");
    decbin(num);

    num = clearbit(num,5);
    printf("\nClear bit : ");
    decbin(num);

    num = togglebit(num,2);
    printf("\nToggle bit : ");
    decbin(num);

    return 0;
}
/* how it works:
1. The program first prompts the user to enter a number and reads it into the variable num.
2. It then calls the decbin function to print the binary representation of the original number.
3. The setbit function is called to set the bit at position 3, and the result is printed.
4. The clearbit function is called to clear the bit at position 5, and the result is printed.
5. The togglebit function is called to toggle the bit at position 2, and the result is printed.
*/