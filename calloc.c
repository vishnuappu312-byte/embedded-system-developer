#include <stdio.h>
#include <stdlib.h>

int main() {
    int *ptr;
    int n = 5;

    // Allocate and initialize to zero
    ptr = (int *)calloc(n, sizeof(int));

    if (ptr == NULL) {
        printf("Memory allocation failed\n");
        return 1;
    }

    printf("calloc values (default initialized):\n");
    for (int i = 0; i < n; i++) {
        printf("%d ", ptr[i]);   // All will print 0
    }

    free(ptr);
    return 0;
}
