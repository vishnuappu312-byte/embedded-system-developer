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