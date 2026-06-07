#include<stdio.h>
#include<string.h>

   char str[100];
    int i, j;
int main()
{
    printf("Enter a string: ");
    scanf("%[^\n]s", str); // Read a line of input including spaces
    int len = strlen(str);
    for(i = 0; i < len; i++)
    {
        if(str[i] == ' ' && str[i+1] == ' ')
        {
            continue; // Skip the current iteration if there are multiple spaces
        }
        str[j++] = str[i]; // Copy the character to the position j and increment j
    }
    str[j] = '\0'; // Null-terminate the modified string
    printf("String with reduced spaces: %s\n", str);
    return 0;
}
/* This program reduces multiple spaces in a string to a single space.
 How it works:
 1. The program prompts the user to enter a string and reads it into the variable 'str'. The format specifier "%[^\n]s" allows the program to read a line of input including spaces until a newline character is encountered.
 2. It calculates the length of the string using 'strlen' function.
 3. It uses a loop to iterate through each character of the string.
 4. Inside the loop, it checks if the current character is a space and      
    if the next character is also a space. If both conditions are true, it uses 'continue' to skip the current iteration, effectively ignoring multiple spaces.
 5. If the current character is not part of multiple spaces, it copies the character to the position 'j' and increments 'j' to keep track of the new position in the modified string.
 6. After the loop, it null-terminates the modified string at position 'j'.
 7. Finally, it prints the modified string with reduced spaces.
    Example:    
    If the input string is "Hello   World  ", the output will be "String with reduced spaces: Hello World ".    
    If the input string is "   This   is   a   test.  ", the output will be "String with reduced spaces: This is a test. ".
    */