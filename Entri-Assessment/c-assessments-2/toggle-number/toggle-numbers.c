#include<stdio.h>

int num;

int toggle(int n , int pos , int nofbits)
{
    int mask = ((1 << nofbits) - 1) << pos; // Create a mask with nofbits set to 1 starting from position pos
    return n ^ mask; // Toggle the bits in n using XOR with the mask
}

int main()
{
    int pos, nofbits;
    printf("Enter an integer: ");
    scanf("%d", &num);
    printf("Enter the position to start toggling bits: ");
    scanf("%d", &pos);
    printf("Enter the number of bits to toggle: ");
    scanf("%d", &nofbits);

    int result = toggle(num, pos, nofbits);
    printf("Result after toggling bits: %d\n", result);

    return 0;
}
/* This program toggles a specified number of bits in an integer starting from a given position.
 How it works:
 1. The program prompts the user to enter an integer and reads it into the variable 'num'.
 2. It then prompts the user to enter the position to start toggling bits and the number of bits to toggle.
 3. The 'toggle' function creates a mask with the specified number of bits set to 1 starting from the given position.
 4. It uses XOR operation with the mask to toggle the bits in 'num'.
 5. Finally, it prints the result after toggling the bits.
 example:
 If the input integer is 15 (binary: 1111), position is 1, and number of bits to toggle is 2, the mask will be:
 - (1 << 2) - 1 = 3 (binary: 11)
 - mask << 1 = 6 (binary: 110)
 Toggling bits in 15 (1111) with mask 6 (110) will result in:
 - 1111 XOR 0110 = 1001 (which is 9 in decimal)
 The output will be "Result after toggling bits: 9".
 */
/*num = 12

12 = 00001100

Mask = 00000100

Toggle:

00001100
00000100
--------
00001000

Result = 8*/