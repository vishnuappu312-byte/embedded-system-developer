#include <stdio.h>

int main()
{
    int n,i,j,temp;

    printf("Enter size: ");
    scanf("%d",&n);

    int arr[n];

    printf("Enter elements:\n");
    for(i=0;i<n;i++)
    {
        scanf("%d",&arr[i]);
    }
    for(i=0;i<n;i++)
    {
        for(j=i+1;j<n;j++)
        {
            if(arr[i] > arr[j])
            {
                temp = arr[i];
                arr[i] = arr[j];
                arr[j] = temp;
            }
        }
    }

  
    printf("Sorted array:\n");
    for(i=0;i<n;i++)
    {
        printf("%d ",arr[i]);
    }

    printf("\nSecond largest = %d",arr[n-2]);

    return 0;
} 
/*
how its work:
1. The program first prompts the user to enter the size of the array and then reads that value into the variable n.
2. It then declares an array of integers with the size specified by the user.
3. The program prompts the user to enter the elements of the array and reads them into the array using a loop.
4. The program uses a nested loop to sort the array in ascending order. The outer loop iterates through each element, while the inner loop compares the current element with the subsequent elements and swaps them if they are out of order.
5. After sorting, the program prints the sorted array.
6. Finally, it prints the second largest element, which is located at index n-2 in the sorted array (since array indexing starts at 0). 
Note: This program assumes that the user will enter at least two elements to ensure that there is a second largest element.


*/