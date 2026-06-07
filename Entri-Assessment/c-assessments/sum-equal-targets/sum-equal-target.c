#include <stdio.h>

int main()
{
    int arr[100];
    int size, target;
    int found = 0;

    printf("Enter size: ");
    scanf("%d", &size);

    printf("Enter elements: ");
    for(int i = 0; i < size; i++)
    {
        scanf("%d", &arr[i]);
    }

    printf("Enter target sum: ");
    scanf("%d", &target);

    printf("Pairs with sum %d are:\n", target);

    for(int i = 0; i < size; i++)
    {
        for(int j = i + 1; j < size; j++)
        {
            if(arr[i] + arr[j] == target)
            {
                printf("(%d, %d)\n", arr[i], arr[j]);
                found = 1;
            }
        }
    }

    if(found == 0)
    {
        printf("No pairs found.\n");
    }

    return 0;
}

/*
how it works:
1. The program prompts the user to enter the size of the array and then reads the elements into the array.
2. It asks the user for a target sum.
3. The program uses two nested loops to check all unique pairs of elements in the array.
4. If the sum of a pair equals the target, it prints the pair and sets a flag to indicate that at least one pair was found.
5. After checking all pairs, if no pairs were found, it prints a message indicating that no pairs were found.
example:
If the input array is [1, 2, 3, 4, 5] and the target sum is 5, the output will be:
Pairs with sum 5 are:
(1, 4)
(2, 3)
If the input array is [1, 2, 3] and the target sum is 10, the output will be:
Pairs with sum 10 are:
No pairs found.

memmory trick:
1. The outer loop iterates through each element of the array, while the inner loop checks for pairs by starting from the next element (j = i + 1) to avoid repeating pairs and to ensure that we only consider unique pairs.
2. The condition arr[i] + arr[j == target checks if the current pair of elements sums up to the target value. If it does, the pair is printed and a flag is set to indicate that at least one valid pair was found.
3. After the loops, if the flag is still 0, it means no pairs were found that sum up to the target, and a message is printed accordingly. This approach ensures that we efficiently check all possible pairs without unnecessary comparisons, and it provides clear output based on whether valid pairs were found or not.

i -> First element

j -> Remaining elements

Check:
arr[i] + arr[j] == target

Yes -> Print pair
No  -> Continue

j starts from i+1

Reason:
Don't compare an element with itself.
Don't repeat same pair twice.




*/