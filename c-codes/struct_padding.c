#include <stdio.h>

struct A
{
    char a;   // 1 byte
    int b;    // 4 bytes
    char c;   // 1 byte
};

int main()
{
    printf("Size of struct A = %lu\n", sizeof(struct A));
    return 0;
}
