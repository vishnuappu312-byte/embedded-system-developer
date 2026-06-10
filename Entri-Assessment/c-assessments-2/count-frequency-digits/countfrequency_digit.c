#include <stdio.h>

long long num;
void countDigitFrequency(long long num, int freq[])
{
    while(num > 0)
    {
        int digit = num % 10;
        freq[digit] = freq[digit] + 1;
        num /= 10;
    }
}

int main()
{
    int freq[10] = {0};

    printf("Enter a positive integer: ");
    scanf("%lld", &num);

    countDigitFrequency(num, freq);

    printf("Digit Frequency:\n");
    for (int i = 0; i < 10; i++)
    {
        printf("Digit %d: %d times\n", i, freq[i]);
    }

    return 0;
}
/* This program counts the frequency of each digit in a given positive integer. 
how it works:
1. The program first prompts the user to enter a positive integer and reads it into the variable num.
2. It initializes an array freq of size 10 to store the frequency of digits from 0 to 9, with all elements initialized to 0.
3. The countDigitFrequency  function takes the input number and the frequency array as arguments. It uses a while loop to extract each digit from the number by taking the modulus with 10 (num % 10). This gives the last digit of the number.
4. The frequency of the extracted digit is incremented in the freq array at the index corresponding to that digit.
5. The number is then divided by 10 (num /= 10) to remove the last digit, and the loop continues until the number becomes zero.
6. After counting the frequency of all digits, the program prints the frequency of each digit from 0 to 9 using a for loop to iterate through the freq array and display the results.
 example: If the user enters the number 123321, the output will show that digit 1 appears 2 times, digit 2 appears 2 times, and digit 3 appears 2 times, while the other digits (0, 4, 5, 6, 7, 8, 9) appear 0 times.
 


*/
// every time number extract count save in the index of the frequency array. The number is divided by 10 to remove the last digit until the number becomes zero.