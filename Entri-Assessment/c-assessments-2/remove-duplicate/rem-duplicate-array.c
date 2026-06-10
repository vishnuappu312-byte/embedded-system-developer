#include<stdio.h>

int main()
{
    int arr[100];
    int size;

    printf("Enter size: ");
    scanf("%d", &size);

    printf("Enter elements: ");
    for(int i = 0; i < size; i++)
    {
        scanf("%d", &arr[i]);
    }

    printf("Unique elements: ");

    for(int i = 0; i < size; i++) // Outer loop iterates through each element of the array
    {
        int duplicate = 0;

        for(int j = 0; j < i; j++)// Inner loop checks if the current element has appeared before in the array
        {
            if(arr[i] == arr[j])// If a duplicate is found, set the flag variable 'duplicate' to 1 and break the inner loop
            {
                duplicate = 1;
                break;
            }
        }

        if(!duplicate)
        {
            printf("%d ", arr[i]);
        }
    }

    printf("\n");

    return 0;
}

/* This program removes duplicate elements from an array and prints the unique elements.
 How it works:
 1. The program prompts the user to enter the size of the array and then reads the elements into the array.
 2. It uses a nested loop to check for duplicates. The outer loop iterates through each element of the array, while the inner loop checks if the current element has appeared before in the array.
 3. If a duplicate is found, a flag variable 'duplicate' is set to 1, and the inner loop breaks.
 4. After checking for duplicates, if the 'duplicate' flag is still 0, it means that the current element is unique, and it is printed to the console.
 5. Finally, it prints all unique elements from the array.
 Example:
 If the input array is [1, 2, 3, 2, 4], the output will be "Unique elements: 1 2 3 4" because '2' appears twice but only one instance is printed as unique.
 
 how it works with example:
 Input: arr = [1, 2, 3, 2, 4], size = 5
    - For i = 0 (arr[0] = 1):
    - No previous elements to compare, so duplicate = 0. Print 1.
    - For i = 1 (arr[1] = 2):
    - Compare with arr[0] (1), no match, so duplicate = 0. Print 2.
    - For i = 2 (arr[2] = 3):
    - Compare with arr[0] (1) and arr[1] (2), no match, so duplicate = 0. Print 3.
    - For i = 3 (arr[3] = 2):
    - Compare with arr[0] (1), no match, but compare with arr[1] (2), match found, so duplicate = 1. Do not print 2.
    - For i = 4 (arr[4] = 4):
    - Compare with arr[0] (1), arr[1] (2), arr[2] (3), and arr[3] (2), no match, so duplicate = 0. Print 4.
 Output: Unique elements: 1 2 3 4



 */