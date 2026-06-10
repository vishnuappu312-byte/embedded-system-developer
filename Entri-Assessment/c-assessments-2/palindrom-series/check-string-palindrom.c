#include <stdio.h>
#include <string.h>

    char str[100];
    int num = 0;
    int i;  

int main()
{
    printf("Enter a string: ");
    scanf("%s", str);

    int len = strlen(str);
    int isPalindrome = 1;

    for(i = 0; i < len/2; i++)
    {
        if(str[i] != str[len-i-1])
        {
            isPalindrome = 0;
            break;
        }
    }

    if(isPalindrome)
    {
        printf("The string is a palindrome.\n");
    }
    else
    {
        printf("The string is not a palindrome.\n");
    }

    return 0;
}
/* This program checks if a given string is a palindrome or not.
 A palindrome is a word, phrase, number, or other sequence of characters that reads the same forward and backward (ignoring spaces, punctuation, and capitalization).
 
 How it works:
 1. The program prompts the user to enter a string and reads it into the variable 'str'.
 2. It calculates the length of the string using 'strlen' function.
 3. It initializes a flag variable 'isPalindrome' to 1 (true).
 4. It uses a loop to compare characters from the start and end of the string moving towards the center.
    - If any pair of characters does not match, it sets 'isPalindrome' to 0 (false) and breaks out of the loop.
 5. After the loop, it checks the value of 'isPalindrome' and prints whether the string is a palindrome or not.
 
 Example:
 If the input string is "madam", the program will compare:
 - 'm' with 'm' (match)
 - 'a' with 'a' (match)
 - 'd' with 'd' (match)
 Since all characters match, it will output "The string is a palindrome."
 If the input string is "hello", it will compare:
 - 'h' with 'o' (not a match)
 The program will set 'isPalindrome' to 0 and output "The string is not a palindrome."
 */