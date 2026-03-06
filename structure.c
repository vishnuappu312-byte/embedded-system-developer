#include <stdio.h>

struct Student
{
    int id;
    char grade;
};

int main()
{
    struct Student s[3] = {
        {101, 'A'},
        {102, 'B'},
        {103, 'C'}
    };

    for(int i = 0; i < 3; i++)
    {
        printf("Student %d: ID = %d, Grade = %c\n",
               i, s[i].id, s[i].grade);
    }

    return 0;
}
