#include<stdio.h>

int dec_num, t_base , rem, i = 0;
char hex_num[100];

void convertToBase(int dec_num, int t_base)
{
    char digits[] = "0123456789ABCDEF";

    
    if (dec_num == 0)
    {
    hex_num[i++] = '0';
    return 0;
    }
    while (dec_num != 0)
    {
        rem = dec_num % t_base;
        // if (rem < 10)
        // {
        //     hex_num[i++] = rem + '0';
        // }
        // else
        // {
        //     hex_num[i++] = rem - 10 + 'A';
        // }
        hex_num[i++] = digits[rem];
        dec_num /= t_base;
    }

}

int main()
{
    printf("Enter a decimal number: ");
    scanf("%d", &dec_num);

    printf("Enter the target base (2, 8, or 16): ");
    scanf("%d", &t_base);

    if (t_base != 2 && t_base != 8 && t_base != 16)
    {
        printf("Invalid base. Please enter 2, 8, or 16.\n");
        return 1;
    }

    convertToBase(dec_num, t_base);

    printf("The number %d in base %d is: ", dec_num, t_base);
    for (i = i - 1; i > 0; i--)
    {
        printf("%c", hex_num[i]);
    }
    printf("\n");

    return 0;
}