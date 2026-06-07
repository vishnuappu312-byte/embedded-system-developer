#include<stdio.h>

int extractNumber(int extractnum ,int startbit , int position )
{
    int mask = ((1 << position) - 1) << startbit; // Create a mask with 'position' number of bits set to 1 starting from 'startbit'
    return (extractnum & mask) >> startbit; // Extract the bits using AND with the mask and then right shift to get the result
}
int main()
{
    int num, startbit, position;
    printf("Enter an integer: ");
    scanf("%d", &num);
    printf("Enter the starting bit position: ");
    scanf("%d", &startbit);
    printf("Enter the number of bits to extract: ");
    scanf("%d", &position);

    int result = extractNumber(num, startbit, position);
    printf("Extracted number: %d\n", result);

    return 0;
}

/* This program extracts a specified number of bits from an integer starting from a given bit position.
 How it works:
 1. The program prompts the user to enter an integer, the starting bit position, and the number of bits to extract.
 2. The 'extractNumber' function creates a mask with the specified number of bits set to 1 starting from the given starting bit position.
 3. It uses the AND operation with the mask to extract the desired bits from the input integer and then right shifts the result to align it to the least significant bits.
 4. Finally, it prints the extracted number.
 example:
 If the input integer is 29 (binary: 11101), starting bit position is 1, and number of bits to extract is 3, the mask will be:
 - (1 << 3) - 1 = 7 (binary: 111)
 - mask << 1 = 14 (binary: 1110)
 Extracting bits from 29 (11101) with mask 14 (1110) will result in:
 - 11101 AND 01110 = 01100 (which is 12 in decimal)
 After right shifting by 1, the final result will be 6 (binary: 110).
 The output will be "Extracted number: 6".
 */
/*num = 29

29 = 00011101

Mask = 00001110

AND:

00011101
00001110
--------
00001100

Shift:

00001100 >> 1
=
00000110

Result = 6*/