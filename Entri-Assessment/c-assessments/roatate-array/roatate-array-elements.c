#include <stdio.h>

void rotate(int arr[], int size, int positions, char direction)
{
    int temp[100];

    positions = positions % size;

    if(direction == 'R' || direction == 'r')
    {
        // Right Rotation
        for(int i = 0; i < size; i++)
        {
            temp[(i + positions) % size] = arr[i];
        }
    }
    else if(direction == 'L' || direction == 'l')
    {
        // Left Rotation
        for(int i = 0; i < size; i++)
        {
            temp[i] = arr[(i + positions) % size];
        }
    }
    else
    {
        printf("Invalid direction!\n");
        return;
    }

    for(int i = 0; i < size; i++)
    {
        arr[i] = temp[i];
    }
}

int main()
{
    int arr[100];
    int size, positions;
    char direction;

    printf("Enter size: ");
    scanf("%d", &size);

    printf("Enter elements: ");
    for(int i = 0; i < size; i++)
    {
        scanf("%d", &arr[i]);
    }

    printf("Enter number of positions to rotate: ");
    scanf("%d", &positions);

    printf("Enter direction (L for Left, R for Right): ");
    scanf(" %c", &direction);

    rotate(arr, size, positions, direction);

    printf("Rotated array: ");
    for(int i = 0; i < size; i++)
    {
        printf("%d ", arr[i]);
    }

    printf("\n");

    return 0;
}

/*
this program defines a function `rotate` that takes an array, its size, the number of positions to rotate, and the direction of rotation (left or right). The function uses a temporary array to store the rotated elements and then copies them back to the original array. The main function prompts the user for input and displays the rotated array.
Example:
Input: [1, 2, 3, 4, 5], positions = 2, direction = 'R'
Output: [4, 5, 1, 2, 3]
Input: [1, 2, 3, 4, 5], positions = 2, direction = 'L'
Output: [3, 4, 5, 1, 2]
how it works:
1. The program prompts the user to enter the size of the array and then reads the elements into the array.
2. It asks the user for the number of positions to rotate and the direction of rotation (left or right).
3. The `rotate` function calculates the new positions of the elements based on the specified direction and number of positions, and stores the rotated elements in a temporary array.
4. Finally, it copies the rotated elements back to the original array and prints the rotated array. 
5. The program handles both left and right rotations by adjusting the index calculations accordingly.   


ARRAY ROTATION MEMORY TRICK

RIGHT ROTATION

Code:

temp[(i + pos) % size] = arr[i];

Meaning:

Take current element
Move it RIGHT by pos positions
Use % size to wrap around when reaching the end

Example:

Array = 1 2 3 4 5
pos = 2

1 goes to index 2
2 goes to index 3
3 goes to index 4
4 goes to index 0
5 goes to index 1

Result:

4 5 1 2 3

Memory Trick:

RIGHT ROTATION
=
Current element decides its NEW position


--------------------------------------------------

LEFT ROTATION

Code:

temp[i] = arr[(i + pos) % size];

Meaning:

Take element pos positions ahead
Bring it to the current position
Use % size to wrap around when reaching the end

Example:

Array = 1 2 3 4 5
pos = 2

temp[0] = arr[2] = 3
temp[1] = arr[3] = 4
temp[2] = arr[4] = 5
temp[3] = arr[0] = 1
temp[4] = arr[1] = 2

Result:

3 4 5 1 2

Memory Trick:

LEFT ROTATION
=
Current position chooses a value from pos positions ahead


--------------------------------------------------

MODULUS (%) TRICK

positions = positions % size;

Example:

size = 5
positions = 12

12 % 5 = 2

So rotating by 12 positions
=
rotating by 2 positions

Memory Trick:

% size = Wrap Around

Whenever index exceeds array size,
start again from index 0.

memory trick:
RIGHT ROTATION
=
Current element decides its NEW position
LEFT ROTATION
=
Current position chooses a value from pos positions ahead
MODULUS (%) TRICK
=
Wrap Around 
positions = positions % size;
why this is important:
If positions >= size, we can reduce it to a smaller equivalent rotation.

*/
