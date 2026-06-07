#include <stdio.h>


void merge(int arr1[], int size1, int arr2[], int size2, int merged[])
{
    int i = 0, j = 0, k = 0;

    while(i < size1 && j < size2)
    {
        if(arr1[i] < arr2[j])
        {
            merged[k++] = arr1[i++];
        }
        else
        {
            merged[k++] = arr2[j++];
        }
    }

    while(i < size1)
    {
        merged[k++] = arr1[i++];
    }

    while(j < size2)
    {
        merged[k++] = arr2[j++];
    }
}
int main()
{
    int arr1[100], arr2[100], merged[200];
    int size1, size2;

    printf("Enter size of first array: ");
    scanf("%d", &size1);

    printf("Enter elements of first array (sorted): ");
    for(int i = 0; i < size1; i++)
    {
        scanf("%d", &arr1[i]);
    }

    printf("Enter size of second array: ");
    scanf("%d", &size2);

    printf("Enter elements of second array (sorted): ");
    for(int i = 0; i < size2; i++)
    {
        scanf("%d", &arr2[i]);
    }

    merge(arr1, size1, arr2, size2, merged);

    printf("Merged array: ");
    for(int i = 0; i < size1 + size2; i++)
    {
        printf("%d ", merged[i]);
    }
    printf("\n");

    return 0;
}
/* how it works:
   1. The program prompts the user to enter the size and elements of two sorted arrays.
   2. It defines a merge function that takes two sorted arrays and their sizes, along with an array to store the merged result.
   3. The merge function uses three indices (i, j, k) to keep track of the current position in the first array, second array, and merged array respectively.
   4. It compares elements from both arrays and adds the smaller one to the merged array, incrementing the corresponding index.
   5. After one of the arrays is fully traversed, it adds any remaining elements from the other array to the merged array.
   6. Finally, it prints the merged array.

 example:
 If the input arrays are [1, 3, 5] and [2, 4, 6], the output will be "Merged array: 1 2 3 4 5 6".
    If the input arrays are [1, 2, 3] and [4, 5, 6], the output will be "Merged array: 1 2 3 4 5 6".
    If the input arrays are [1, 4, 7] and [2, 5, 8], the output will be "Merged array: 1 2 4 5 7 8".
    
    i -> arr1 pointer
j -> arr2 pointer
k -> merged pointer

Compare arr1[i] and arr2[j]

Take smaller element
Store in merged[k]

Move corresponding pointer

Repeat

When one array finishes,
copy all remaining elements
from the other array.

important:
1. Both input arrays must be sorted for the merge function to work correctly.
2. The merged array should have enough space to hold all elements from both input arrays (size
1 + size2).
3. The merge function efficiently combines the two sorted arrays in O(size1 + size2) time complexity, which is optimal for merging sorted arrays.   
    importance of while loops:
1. The first while loop ensures that we compare elements from both arrays until one of them is fully traversed. This allows us to merge the arrays in a single pass, maintaining the sorted order.
2. The second and third while loops handle the case where one of the arrays has remaining elements  after the first while loop finishes. This ensures that all elements from both arrays are included in the merged result, even if one array is longer than the other.

    */


    /*
    
NB: ARRAY SORTING & MERGING QUESTIONS

1. MERGE TWO SORTED ARRAYS

Question:
Merge two sorted arrays into a single sorted array without using any sorting function.

Example:
arr1 = 1 3 5
arr2 = 2 4 6

Output:
1 2 3 4 5 6

Logic:
Compare elements from both arrays.
Take smaller element.
Move corresponding pointer.
Copy remaining elements.

Memory Trick:
Compare
Take Smaller
Move Pointer
Repeat

==================================================

2. MERGE THREE SORTED ARRAYS

Question:
Merge three sorted arrays into one sorted array.

Example:
arr1 = 1 4
arr2 = 2 5
arr3 = 3 6

Output:
1 2 3 4 5 6

Logic:
Compare current elements of all arrays.
Take smallest element.
Move corresponding pointer.

Memory Trick:
Find Smallest
Store
Move Pointer

==================================================

3. MERGE TWO UNSORTED ARRAYS

Question:
Merge two arrays and sort the merged array.

Example:
arr1 = 3 1
arr2 = 4 2

Output:
1 2 3 4

Logic:
Merge arrays.
Apply sorting algorithm.

Memory Trick:
Merge First
Sort Later

==================================================

4. BUBBLE SORT

Question:
Sort array in ascending order.

Example:
5 3 1 4 2

Output:
1 2 3 4 5

Logic:
Compare adjacent elements.
Swap if required.
Largest element reaches end after every pass.

Memory Trick:
Big Element Bubbles Up

==================================================

5. SELECTION SORT

Question:
Sort array using selection sort.

Logic:
Find minimum element.
Place it at correct position.
Repeat.

Memory Trick:
Find Minimum
Place Correctly

==================================================

6. INSERTION SORT

Question:
Sort array using insertion sort.

Logic:
Take one element.
Insert it into sorted portion.

Memory Trick:
Pick
Shift
Insert

==================================================

7. SORT ARRAY IN ASCENDING ORDER

Question:
Arrange numbers from smallest to largest.

Example:
5 2 8 1

Output:
1 2 5 8

Memory Trick:
Small → Large

==================================================

8. SORT ARRAY IN DESCENDING ORDER

Question:
Arrange numbers from largest to smallest.

Example:
5 2 8 1

Output:
8 5 2 1

Memory Trick:
Large → Small

==================================================

9. SORT EVEN AND ODD SEPARATELY

Question:
Place even numbers first and odd numbers later.

Example:
1 4 3 2 5 6

Output:
4 2 6 1 3 5

Memory Trick:
Even First
Odd Later

==================================================

10. SORT 0s, 1s AND 2s

Question:
Sort array containing only 0,1,2.

Example:
2 0 1 2 1 0

Output:
0 0 1 1 2 2

Logic:
Count occurrences.
Overwrite array.

Memory Trick:
Count
Overwrite

==================================================

11. FIND MEDIAN AFTER SORTING

Question:
Find median element.

Example:
1 2 3 4 5

Output:
3

Memory Trick:
Sort
Middle Element

==================================================

12. FIND KTH SMALLEST ELEMENT

Question:
Find Kth smallest number.

Example:
1 5 2 3 4

K = 2

Output:
2

Logic:
Sort array.
Take arr[k-1].

Memory Trick:
Sort
Take Position

==================================================

13. FIND KTH LARGEST ELEMENT

Question:
Find Kth largest number.

Example:
1 5 2 3 4

K = 2

Output:
4

Logic:
Sort array.
Count from end.

Memory Trick:
Sort
Count From End

==================================================

14. REMOVE DUPLICATES FROM SORTED ARRAY

Question:
Remove duplicate values.

Example:
1 1 2 2 3 3

Output:
1 2 3

Logic:
Compare current with previous.

Memory Trick:
Current != Previous
Keep It

==================================================

15. UNION OF TWO SORTED ARRAYS

Question:
Print all unique elements from both arrays.

Example:
1 2 3
2 3 4

Output:
1 2 3 4

Memory Trick:
Merge
Skip Duplicates

==================================================

16. INTERSECTION OF TWO SORTED ARRAYS

Question:
Print common elements.

Example:
1 2 3 4
2 4 6

Output:
2 4

Logic:
Equal -> Print
Smaller -> Move

Memory Trick:
Equal → Print
Smaller → Move

==================================================

17. CHECK WHETHER ARRAY IS SORTED

Question:
Verify array is sorted.

Example:
1 2 3 4

Output:
Sorted

Logic:
Check arr[i] <= arr[i+1]

Memory Trick:
Current <= Next

==================================================

18. MERGE INTERVALS

Question:
Merge overlapping intervals.

Example:
[1,3]
[2,6]
[8,10]

Output:
[1,6]
[8,10]

Memory Trick:
Overlap ?
Merge

==================================================

19. RELATIVE SORTING

Question:
Sort one array according to another array’s order.

Example:
arr1 = 2 1 2 5 7 1 9
arr2 = 2 1 8

Output:
2 2 1 1 5 7 9

Memory Trick:
Follow Reference Array

==================================================

20. MERGE SORT

Question:
Sort array using divide and conquer.

Logic:
Divide array.
Sort left half.
Sort right half.
Merge sorted halves.

Memory Trick:
Divide
Sort
Merge

==================================================

MASTER MEMORY TRICK

MERGING QUESTIONS:
i -> First Array
j -> Second Array
k -> Output Array

Compare
Take Smaller
Move Pointer
Repeat

==================================================

SORTING QUESTIONS:

Bubble Sort:
Big Element Bubbles Up

Selection Sort:
Find Minimum
Place Correctly

Insertion Sort:
Pick
Shift
Insert

Merge Sort:
Divide
Sort
Merge
    
    
    
    */