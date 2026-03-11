#include <stdio.h>
#include <stdlib.h>

int main()
{
    int n, i;
    int old_n;
    int *arr;

    printf("Enter number of elements: ");
    scanf("%d", &n);

    arr = malloc(n * sizeof(int));

    if(arr == NULL)
    {
        printf("Memory allocation failed\n");
        return 1;
    }

    printf("Enter %d numbers:\n", n);
    for(i = 0; i < n; i++)
        scanf("%d", &arr[i]);

    printf("Array elements are:\n");
    for(i = 0; i < n; i++)
        printf("%d ", arr[i]);

    old_n = n;

    printf("\nEnter new number of elements: ");
    scanf("%d", &n);

    int *temp = realloc(arr, n * sizeof(int));
    if(temp == NULL)
    {
        printf("Memory reallocation failed\n");
        free(arr);
        return 1;
    }

    arr = temp;

    if(n > old_n)
    {
        printf("Enter %d more numbers:\n", n - old_n);
        for(i = old_n; i < n; i++)
            scanf("%d", &arr[i]);
    }

    printf("Updated array elements are:\n");
    for(i = 0; i < n; i++)
        printf("%d ", arr[i]);

    free(arr);
    arr = NULL;

    printf("\nMemory freed successfully\n");

    return 0;
}