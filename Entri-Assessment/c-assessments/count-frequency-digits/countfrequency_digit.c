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
/* This program counts the frequency of each digit in a given positive integer. */
// every time number extract count save in the index of the frequency array. The number is divided by 10 to remove the last digit until the number becomes zero.