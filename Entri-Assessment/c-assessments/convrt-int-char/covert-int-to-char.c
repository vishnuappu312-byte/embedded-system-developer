#include <stdio.h>

int main()
{
    int num, temp, i = 0, j;
    char str[20];

    printf("Enter an integer: ");
    scanf("%d", &num);

    //temp = num;

    if(num == 0)
    {
        str[i++] = '0';
    }

    while(num > 0)
    {
        str[i++] = (num % 10) + '0';
        num /= 10;
    }

    str[i] = '\0';

    for(j = 0; j < i/2; j++)
    {
        char t = str[j]; // Store the character at position j in a temporary variable t
        str[j] = str[i-j-1];// Swap the character at position j with the character at position i-j-1 (the corresponding character from the end of the string)
        str[i-j-1] = t;// Assign the value of t (the original character at position j) to the position i-j-1, completing the swap
    }

    printf("String: %s\n", str);

    return 0;
}
/* This program converts an integer to a string 
 enter 12345 and it will output "String: 12345"
 how it works:
 1. The program prompts the user to enter an integer and reads it into the variable 'num'.
 2. It initializes a temporary variable 'temp' with the value of 'num' and an index 'i' to keep track of the position in the string.
 3. If the input number is 0, it directly assigns '0' to the string and increments the index.
 4. It uses a while loop to extract each digit from the number by taking the modulus 10 of 'num' and converting it to a character by adding '0'. This character is
    calculation : if num is 12345, then:
    - num % 10 = 5, so str[0] = '5'
    - num becomes 1234 after num /= 10
    - num % 10 = 4, so str[1] = '4'
    - num becomes 123 after num /= 10
    - num % 10 = 3, so str[2] = '3'
    - num becomes 12 after num /= 10
    - num % 10 = 2, so str[3] = '2'
    - num becomes 1 after num /= 10
    - num % 10 = 1, so str[4] = '1'
    - temp becomes 0 after temp /= 10, and the loop ends.
 5. After the loop, the string is null-terminated.
 6. Since the digits were added in reverse order, another loop is used to reverse the string to get the correct order.
 7. Finally, the program prints the resulting string representation of the integer.
 how reverse works:
 - The loop runs from 0 to i/2, where i is the length of the string.
 - It swaps the characters at positions j and i-j-1, effectively reversing the string. For example, if the string is "54321", after the first iteration (j=0`

calculation steps:
 - j=0: swap str[0] and str[4] -> "12345"
 - j=1: swap str[1] and str[3] -> "12345" (no change since they are the same)
 - The loop ends since j < i/2 (j < 2.5) is no longer true.

*/