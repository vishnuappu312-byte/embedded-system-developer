#include<stdio.h>

int num1, num2;
int position ,nobits;


void swapBits(int num1, int num2, int position, int nobits)
{
    int mask = ((1 << nobits) - 1) << position; // Create a mask with 'nobits' set to 1 starting from 'position'
    int bits1 = (num1 & mask) >> position; // Extract the bits from num1 and right shift to align
    int bits2 = (num2 & mask) >> position; // Extract the bits from num2 and right shift to align

    // Clear the bits in num1 and num2 at the specified position
    num1 = num1 & ~mask;
    num2 = num2 & ~mask;

    // Swap the extracted bits and insert them back into num1 and num2
    num1 = num1 | (bits2 << position);
    num2 = num2 | (bits1 << position);

    printf("After swapping:\n");
    printf("First number: %d\n", num1);
    printf("Second number: %d\n", num2);
}
int main ()
{
    printf("enter first number: ");
    scanf("%d", &num1);
    printf("enter second number: ");
    scanf("%d", &num2);
    printf("enter position: ");
    scanf("%d", &position);
    printf("enter number of bits: ");
    scanf("%d", &nobits);
    swapBits(num1, num2, position, nobits);
    return 0;



}
/* Example:

num1 = 29
num2 = 10
position = 1
nobits = 3

Binary:

num1 = 29 = 00011101
num2 = 10 = 00001010

Step 1: Create Mask

mask = ((1 << nobits) - 1) << position

mask = ((1 << 3) - 1) << 1

1 << 3
= 00001000

00001000 - 1
= 00000111

00000111 << 1
= 00001110

Mask = 00001110

Step 2: Extract bits from num1 and num2

bits1 = (num1 & mask) >> position
bits2 = (num2 & mask) >> position

Step 3: Clear the bits in num1 and num2 at the specified position

num1 = num1 & ~mask;
num2 = num2 & ~mask;

Step 4: Swap the extracted bits and insert them back into num1 and num2

num1 = num1 | (bits2 << position);
num2 = num2 | (bits1 << position);

Final Result:

First number: %d\n", num1);
Second number: %d\n", num2);
*/

/*extract bit : (num & mask) >> starting_position
 Extract bits
    ↓
AND with mask
    ↓
Shift right by starting position

for insertion / placement 
Insert bits
↓
Shift LEFT by starting position
↓
Move bits to target position
*/