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
