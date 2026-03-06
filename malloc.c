#include <stdio.h>
#include <stdlib.h>

int main() {
    int *ptr;
    int n = 5;

    // Allocate memory for 5 integers
    ptr = (int *)malloc(n * sizeof(int));

    if (ptr == NULL) {
        printf("Memory allocation failed\n");
        return 1;
    }

    // Assign values
    for (int i = 0; i < n; i++) {
        ptr[i] = i + 1;
    }

    // Print values
    printf("malloc values:\n");
    for (int i = 0; i < n; i++) {
        printf("%d ", ptr[i]);
    }

    free(ptr);   // Always free memory
    return 0;
}
