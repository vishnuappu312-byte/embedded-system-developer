#include<stdio.h>
#include<string.h>

    char str[100];
    int i, j;
    int alphabet[26] = {0}; // Array to keep track of the presence of each letter

    int main()

    {
    printf("Enter a string: ");
    scanf("%[^\n]s", str); // Read a line of input including spaces
    int len = strlen(str);
    for(i = 0; i < len; i++)
    {
        char c = str[i];
        if(c >= 'a' && c <= 'z') // Check if the character is a lowercase letter
        {
            alphabet[c - 'a'] = 1; // Mark the presence of the letter in the alphabet array
        }
        else if(c >= 'A' && c <= 'Z') // Check if the character is an uppercase letter
        {
            alphabet[c - 'A'] = 1; // Mark the presence of the letter in the alphabet array
        }
    }


    int isPangram = 1; // Flag to check if the string is a pangram
    for(i = 0; i < 26; i++)
    {
        if(alphabet[i] == 0) // If any letter is not present in the string
        {
            isPangram = 0; // Set the flag to false
            break;
        }
    }

    if(isPangram)
    {
        printf("The string is a pangram.\n");
    }
    else
    {
        printf("The string is not a pangram.\n");
    }

    return 0;
}
/* This program checks if a given string is a pangram or not.
 A pangram is a sentence that contains every letter of the alphabet at least once. For example, "The quick brown fox jumps over the lazy dog" is a pangram because it contains all
 how its works:
 1. The program prompts the user to enter a string and reads it into the variable 'str'.
 2. It initializes an array 'alphabet' of size 26 to keep track of the presence of each letter in the input string. Each index corresponds to a letter (0 for 'a', 1 for 'b', ..., 25 for 'z').
 3. It iterates through each character in the input string and checks if it is a lowercase or uppercase letter. If it is a letter, it marks the corresponding index in the 'alphabet' array as 1 to indicate that the letter is present.
 4. After processing the string, it checks if all letters are present by iterating through the 'alphabet' array. If any index is still 0, it means that the corresponding letter is missing from the input string, and the flag 'isPangram' is set to 0 (false).
 5. Finally, it checks the value of 'isPangram' and prints whether the string is a pangram or not.  
 */