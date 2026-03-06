#include <stdio.h>

int main()
{
    int arr[] = {10, 20, 30, 40, 50};
    int *ptr;

    // ----------------------------------------
    // 1) ptr++  (post increment pointer)
    ptr = arr;
    printf("1) *ptr++ = %d\n", *ptr++);   // prints 10, ptr moves to next
    printf("   Now *ptr = %d\n\n", *ptr); // 20

    // ----------------------------------------
    // 2) ++ptr  (pre increment pointer)
    ptr = arr;
    printf("2) *++ptr = %d\n", *++ptr);   // ptr moves first, then prints 20
    printf("   Now *ptr = %d\n\n", *ptr); // 20

    // ----------------------------------------
    // 3) ptr--  (post decrement pointer)
    ptr = &arr[2]; // points to 30
    printf("3) *ptr-- = %d\n", *ptr--);   // prints 30, ptr moves back
    printf("   Now *ptr = %d\n\n", *ptr); // 20

    // ----------------------------------------
    // 4) --ptr  (pre decrement pointer)
    ptr = &arr[2]; // points to 30
    printf("4) *--ptr = %d\n", *--ptr);   // ptr moves back first, then prints 20
    printf("   Now *ptr = %d\n\n", *ptr); // 20

    // ----------------------------------------
    // 5) (*ptr)++  (post increment value)
    ptr = arr;
    printf("5) (*ptr)++ = %d\n", (*ptr)++); // prints 10, arr[0] becomes 11
    printf("   Now arr[0] = %d\n\n", arr[0]);

    // ----------------------------------------
    // 6) ++(*ptr)  (pre increment value)
    ptr = arr;
    printf("6) ++(*ptr) = %d\n", ++(*ptr)); // arr[0] becomes 12, prints 12
    printf("   Now arr[0] = %d\n\n", arr[0]);

    // ----------------------------------------
    // 7) (*ptr)--  (post decrement value)
    ptr = arr;
    printf("7) (*ptr)-- = %d\n", (*ptr)--); // prints 12, arr[0] becomes 11
    printf("   Now arr[0] = %d\n\n", arr[0]);

    // ----------------------------------------
    // 8) --(*ptr)  (pre decrement value)
    ptr = arr;
    printf("8) --(*ptr) = %d\n", --(*ptr)); // arr[0] becomes 10, prints 10
    printf("   Now arr[0] = %d\n\n", arr[0]);

    return 0;
}
