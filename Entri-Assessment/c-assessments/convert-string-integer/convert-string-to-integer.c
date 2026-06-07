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