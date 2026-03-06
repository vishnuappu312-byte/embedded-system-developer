#include <stdio.h>
#include <stdlib.h>

int main() {
    int *ptr;
    int n = 3;

    ptr = (int *)malloc(n * sizeof(int));

    if (ptr == NULL) {
        printf("Memory allocation failed\n");
        return 1;
    }

    // Assign values
    for (int i = 0; i < n; i++) {
        ptr[i] = i + 1;
    }

    // Increase size to 6
    n = 6;
    ptr = (int *)realloc(ptr, n * sizeof(int));

    if (ptr == NULL) {
        printf("Reallocation failed\n");
        return 1;
    }

    // Assign new values
    for (int i = 3; i < n; i++) {
        ptr[i] = i + 1;
    }

    printf("realloc values:\n");
    for (int i = 0; i < n; i++) {
        printf("%d ", ptr[i]);
    }

    free(ptr);
    return 0;
}
