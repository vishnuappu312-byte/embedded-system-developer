#include <stdio.h>

int main()
{
    int array[100];
    int size;

    printf("Enter size: ");
    scanf("%d", &size);

    printf("Enter elements: ");
    for(int i = 0; i < size; i++)
    {
        scanf("%d", &array[i]);
    }

    int largest = array[0];
    int secondLargest = array[0];

    int smallest = array[0];
    int secondSmallest = array[0];
//10 , 5 , 20 , 15 , 30;
/*

1st iteration:
largest = 10
secondLargest = 10  
smallest = 10
secondSmallest = 10

2nd iteration:
largest = 10
secondLargest = 10
smallest = 5
secondSmallest = 10

3rd iteration:
largest = 20
secondLargest = 10
smallest = 5
secondSmallest = 10

4th iteration:
largest = 20
secondLargest = 15
smallest = 5
secondSmallest = 10

5th iteration:
largest = 30
secondLargest = 20  
smallest = 5
secondSmallest = 10 


*/

    for(int i = 1; i < size; i++)
    {
        if(array[i] > largest)
        {
            secondLargest = largest;
            largest = array[i];
        }
        else if(array[i] > secondLargest && array[i] != largest)
        {
            secondLargest = array[i];
        }

        if(array[i] < smallest)
        {
            secondSmallest = smallest;
            smallest = array[i];
        }
        else if((array[i] < secondSmallest || secondSmallest == smallest) && array[i] != smallest)
        {
            secondSmallest = array[i];
        }
    }

    if(largest == smallest)
    {
        printf("All elements are the same. No second largest or second smallest element.\n");
    }
    else
    {
        printf("Second Largest Element : %d\n", secondLargest);
        printf("Second Smallest Element: %d\n", secondSmallest);
    }

    return 0;
}

/* how it works:
   1. The program prompts the user to enter the size of the array and then reads the elements into the array.
   2. It initializes variables to keep track of the largest and second largest elements, as well as the smallest and second smallest elements.
   3. It iterates through the array starting from the second element.
   4. For each element, it updates the largest and second largest variables if the current element is larger than the largest element found so far.
   5. Similarly, it updates the smallest and second smallest variables if the current element is smaller than the smallest element found so far.
   6. After iterating through all elements, it checks if all elements are the same. If they are, it prints a message indicating that there is no second largest or second smallest element.
   7. Otherwise, it prints the second largest and second smallest elements.
 example:
 If the input array is [1, 2, 3, 4, 5], the output will be "Second Largest Element : 4" and "Second Smallest Element: 2".
    If the input array is [5, 5, 5, 5], the output will be "All elements are the same. No second largest or second smallest element."
    If the input array is [3, 1, 4, 2, 5], the output will be "Second Largest Element : 4" and "Second Smallest Element: 2".

    Largest Side:
    if(array[i] > largest)
{
    secondLargest = largest;
    largest = array[i];
}

new largest found :

Old largest → secondLargest
New value → largest

smallest side : 

   if(array[i] < smallest)
{
    secondSmallest = smallest;
    smallest = array[i];
}

new smallest found :

   Old smallest → secondSmallest
New value → smallest
   
    */