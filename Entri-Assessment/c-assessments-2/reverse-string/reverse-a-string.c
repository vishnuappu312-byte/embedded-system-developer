#include <stdio.h>
#include <string.h>

    char str[100];
    int i, j;

    int main()
    {

    printf("Enter a string: ");
    scanf("%s", str);   
    int len = strlen(str);
    for(i = 0; i < len/2; i++)
    {
        char t = str[i]; // Store the character at position i in a temporary variable t
        str[i] = str[len-i-1];// Swap the character at position i with the character at position len-i-1 (the corresponding character from the end of the string)
        str[len-i-1] = t;// Assign the value of t (the original character at position i) to the position len-i-1, completing the swap
    }
    printf("Reversed string: %s\n", str);
    return 0;
}
/* This program reverses a given string.
 How it works:
 1. The program prompts the user to enter a string and reads it into the variable 'str'.
 2. It calculates the length of the string using 'strlen' function.
 3. It uses a loop to iterate from the start of the string to the middle (len/2).
 4. Inside the loop, it swaps characters at positions i and len-i-1, effectively reversing the string.
    - For example, if the input string is "hello", the loop will perform the following swaps:
      - Swap 'h' (str[0]) with 'o' (str[4])
      - Swap 'e' (str[1]) with 'l' (str[3])
    After these swaps, the string becomes "olleh".
 5. Finally, it prints the reversed string.
 
 Example:
 If the input string is "hello", the output will be "Reversed string: olleh".
 If the input string is "world", the output will be "Reversed string: dlrow".
 */


//  #include <stdio.h>
// #include <string.h>

// void reverse(char str[], int start, int end)
// {
//     if(start >= end)
//     {
//         return;
//     }

//     char temp = str[start];
//     str[start] = str[end];
//     str[end] = temp;

//     reverse(str, start + 1, end - 1);
// }

// int main()
// {
//     char str[100];

//     printf("Enter a string: ");
//     scanf("%99s", str);

//     reverse(str, 0, strlen(str) - 1);

//     printf("Reversed string: %s\n", str);

//     return 0;
// }