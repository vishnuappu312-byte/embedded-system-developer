#include<stdio.h>
#include<string.h>

int main()
{
    char str[100];
    int i;
    printf("Enter a string: ");
    scanf("%[^\n]s", str);
    for(i = 0; i < strlen(str); i++)
    {
        if(str[i] >= 'A' && str[i] <= 'Z')
        {
            str[i] = str[i] + 32; // Convert uppercase to lowercase
        }
    }
    printf("String in lowercase: %s\n", str);
    return 0;
}
/* This program converts uppercase letters in a string to lowercase.
 How it works:
 1. The program prompts the user to enter a string and reads it into the variable 'str'. The format specifier "%[^\n]s" allows the program to read a line of input including spaces until a newline character is encountered.
 2. It uses a loop to iterate through each character of the string.
 3. Inside the loop, it checks if the current character is an uppercase letter (between 'A' and 'Z').
 4. If it is an uppercase letter, it converts it to lowercase by adding 32 to its ASCII value (since in the ASCII table, the difference between uppercase and lowercase letters is 32).
 5. Finally, it prints the modified string with all uppercase letters converted to lowercase.
 why adding 32 works:
 In the ASCII character encoding, uppercase letters 'A' to 'Z' have ASCII values from 65 to 90, while lowercase letters 'a' to 'z' have ASCII values from 97 to 122. The difference between the ASCII values of uppercase and lowercase letters is 32. For example:
 - 'A' has an ASCII value of 65, and 'a' has an ASCII value of 97. The difference is 97 - 65 = 32.
 Example:
 If the input string is "Hello World", the output will be "String in lowercase: hello world".
 If the input string is "C PROGRAMMING", the output will be "String in lowercase: c programming".
 */
/*         if(str[i] >= 'a' && str[i] <= 'z')
        {
            str[i] = str[i] - 32; // Convert lowercase to uppercase
        }
*/
