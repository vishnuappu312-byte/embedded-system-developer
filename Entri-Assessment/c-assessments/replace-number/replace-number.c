#include<stdio.h>

int replaceBits(int num1, int num2, int pos, int n)
{
    int mask = ((1 << n) - 1) << pos;

    // Clear n bits in num1 starting at pos
    num1 = num1 & ~mask;

    // Take n bits from num2
    int bits = (num2 & ((1 << n) - 1)) << pos;

    // Insert those bits into num1
    return num1 | bits;
}


int main()
{
    int num1, num2;
    int pos, n;

    printf("Enter first integer: ");
    scanf("%d", &num1);

    printf("Enter second integer: ");
    scanf("%d", &num2);

    printf("Enter starting position: ");
    scanf("%d", &pos);

    printf("Enter number of bits to replace: ");
    scanf("%d", &n);

    int result = replaceBits(num1, num2, pos, n);

    printf("Result after replacing bits: %d\n", result);

    return 0;
}
/* TExample:

num1 = 29
num2 = 10
pos = 1
n = 3

Binary:

num1 = 29 = 00011101
num2 = 10 = 00001010

Step 1: Create Mask

mask = ((1 << n) - 1) << pos

mask = ((1 << 3) - 1) << 1

1 << 3
= 00001000

00001000 - 1
= 00000111

00000111 << 1
= 00001110

Mask = 00001110

Step 2: Clear n bits in num1

num1 = num1 & ~mask

mask  = 00001110
~mask = 11110001

num1  = 00011101
~mask = 11110001
----------------
        00010001

Result after clearing = 00010001

Step 3: Extract n bits from num2

bits = num2 & ((1 << n) - 1)

num2 = 00001010
mask = 00000111
----------------
       00000010

Extracted bits = 00000010

Step 4: Shift extracted bits to target position

bits = bits << pos

00000010 << 1
=
00000100

Shifted bits = 00000100

Step 5: Insert bits into num1

result = num1 | bits

num1 = 00010001
bits = 00000100
----------------
       00010101

Final Result = 00010101

Decimal Value:

00010101 = 21

Output:

Result after replacing bits: 21*/