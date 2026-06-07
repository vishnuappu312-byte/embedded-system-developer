#include <stdio.h>
#include <string.h>

    char str[100];
    int num = 0;
    int i;

int main()
{


    printf("Enter a string of digits: ");
scanf("%s", str);


    for(i = 0; str[i] != '\0'; i++)
    {
        num = num * 10 + (str[i] - '0'); // Convert character to integer and accumulate why multiplying previous result by 10 to shift left for next digit 
    }                                  // Example: if str is "1234", then num will be calculated as follows:
                                       // num = 0 * 10 + (1 - '0') = 1
                                       // num = 1 * 10 + (2 - '0') = 12
                                       // num = 12 * 10 + (3 - '0') = 123
                                       // num = 123 * 10 + (4 - '0') = 1234

    printf("The integer value is: %d\n", num);

    return 0;
}
/*  how it works:
1. The program first prompts the user to enter a string of digits and reads it into the variable str.
2. It then initializes the variable num to 0.
3. The program uses a loop to iterate through each character in the string.
4. For each character, it converts the character to an integer by subtracting the ASCII value of '0' from it.
5. It then multiplies the current value of num by 10 and adds the converted integer to it.
6. This process is repeated for each character in the string.
7. Finally, the program prints the resulting integer value.
Example: If the user enters "1234", the program will calculate num as follows:
- Start with num = 0
- For '1': num = 0 * 10 + (1 - '0') = 1
- For '2': num = 1 * 10 + (2 - '0') = 12
- For '3': num = 12 * 10 +  (3 - '0') = 123
- For '4': num = 123 * 10 + (4 - '0') = 1234
Thus, the final output will be "The integer value is: 1234".
*/