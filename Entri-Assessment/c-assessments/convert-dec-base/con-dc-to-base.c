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

/* how it works:
1. The program first prompts the user to enter a decimal number and reads it into the variable dec_num.
2. It then prompts the user to enter the target base and reads it into the variable t_base.
3. The convertToBase function is called to perform the conversion.
4. The result is printed to the user.
5. The convertToBase function uses a loop to repeatedly divide the decimal number by the target base and store the remainders in the hex_num array. The digits array is used to map remainders to their corresponding characters for bases greater than 10.
6. The loop continues until the decimal number is reduced to 0, at which point the remainders have been stored in reverse order in the hex_num array.
7. Finally, the program prints the converted number by iterating through the hex_num array in reverse order, starting from the last index where a digit was stored down to the first index. 
Note: The program assumes that the user will enter a valid decimal number and a valid target base (2, 8, or 16). It does not handle invalid input or negative numbers.  

*/