#include<stdio.h>

int numbers[100];
int positiveNumbers[100];
int negativeNumbers[100];

void arrange(int positiveNumbers[], int negativeNumbers[], int size)
{
    int posIndex = 0, negIndex = 0;

    for(int i = 0; i < size; i++)
    {
        if(numbers[i] >= 0)
        {
            positiveNumbers[posIndex++] = numbers[i];
        }
        else
        {
            negativeNumbers[negIndex++] = numbers[i];
        }
    }

    // Combine positive and negative numbers


    for(int i = 0; i < negIndex; i++)
    {
       
        numbers[i] = negativeNumbers[i];
    }

        for(int i = 0; i < posIndex; i++)
    {
         numbers[negIndex + i] = positiveNumbers[i];
    }

}

int main()
{
    int size;

    printf("Enter size: ");
    scanf("%d", &size);

    printf("Enter elements: ");
    for(int i = 0; i < size; i++)
    {
        scanf("%d", &numbers[i]);
    }

    arrange(positiveNumbers, negativeNumbers, size);

    printf("Rearranged array: ");
    for(int i = 0; i < size; i++)
    {
        printf("%d ", numbers[i]);
    }
    printf("\n");

    return 0;
}
/*

How it works:
1. The program prompts the user to enter the size of the array and then reads the elements into the `numbers` array.
2. The `arrange` function iterates through the `numbers` array and separates positive and negative numbers into `positiveNumbers` and `negativeNumbers` arrays, respectively.
3. After separating the numbers, the function combines them back into the original `numbers` array, placing negative numbers first followed by positive numbers.
4. Finally, the program prints the rearranged array.
Example:
Input: [5, -2, 8, -1]
Output: [-2, -1, 5, 8]
Input: [-3, 4, -1, 2]
Output: [-3, -1, 4, 2]

why negative numbers are placed first:
Negative numbers are placed first because the problem statement requires rearranging the array such that all negative numbers come before all positive numbers.

*/