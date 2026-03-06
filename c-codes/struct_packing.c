#include <stdio.h>

#pragma pack(1)
struct Packed2
{
    char a;
    int b;
    char c;
};
#pragma pack()

int main()
{
    printf("Size of Packed2 struct = %lu\n", sizeof(struct Packed2));
    return 0;
}
