#include<stdio.h>
#include<complex.h>

struct Complex
{
    double real;
    double imag;
};

struct Complex addComplex(struct Complex c1, struct Complex c2)
{
    struct Complex result;
    result.real = c1.real + c2.real;
    result.imag = c1.imag + c2.imag;
    return result;
}

void displayComplex(struct Complex c)
{
    printf("%.2lf + %.2lfi\n", c.real, c.imag);
}
int main()
{
    struct Complex c1, c2, sum;

    printf("Enter real and imaginary parts of first complex number: ");
    scanf("%lf %lf", &c1.real, &c1.imag);

    printf("Enter real and imaginary parts of second complex number: ");
    scanf("%lf %lf", &c2.real, &c2.imag);

    sum = addComplex(c1, c2);

    printf("Sum of the two complex numbers: ");
    displayComplex(sum);

    return 0;
}

/*
how it works:
1. The program defines a structure `Complex` to represent a complex number with real and imaginary parts.
2. The `addComplex` function takes two complex numbers as input, adds their real and imaginary parts separately, and returns the result as a new complex number.
3. The `displayComplex` function is a helper function to print a complex number in the format "real + imaginary".
4. In the `main` function, the program prompts the user to enter the real and imaginary parts of two complex numbers, calls the `addComplex` function to compute their sum, and then displays the result using the `displayComplex` function.
Example:
Input:
Enter real and imaginary parts of first complex number: 2 3
Enter real and imaginary parts of second complex number: 4 5    
Output:
Sum of the two complex numbers: 6.00 + 8.00i
memmory trick:
1. The `addComplex` function creates a new `Complex` structure to store the result of the addition, which allows us to return the sum without modifying the original complex numbers passed as arguments
2. The real and imaginary parts are added separately, which simplifies the logic and makes it easy to understand how complex numbers are added together.







*/


/*
STRUCTURE BASED C PROGRAMMING QUESTIONS

1. STUDENT RECORD

Question:
Define a structure Student with roll number, name, and marks. Read and display student details.

Concepts:
Structures
Input/Output

⸻

2. EMPLOYEE RECORD

Question:
Define a structure Employee with employee ID, name, and salary. Read and display employee details.

Concepts:
Structures
Functions

⸻

3. COMPLEX NUMBER ADDITION

Question:
Define a structure Complex with real and imaginary parts. Add two complex numbers.

Concepts:
Structures
Functions

⸻

4. DISTANCE ADDITION

Question:
Define a structure Distance with feet and inches. Add two distances.

Example:

5 feet 8 inches
+
3 feet 7 inches

Output:

9 feet 3 inches

Concepts:
Structures
Carry Handling

⸻

5. TIME ADDITION

Question:
Define a structure Time with hours, minutes, and seconds. Add two times.

Example:

2:45:30
+
1:20:40

Output:

4:06:10

Concepts:
Structures
Carry Handling

⸻

6. DATE COMPARISON

Question:
Define a structure Date. Compare two dates and determine which is earlier.

Concepts:
Structures
Conditional Statements

⸻

7. STUDENT WITH HIGHEST MARKS

Question:
Store N student records and find the student with highest marks.

Concepts:
Array of Structures

⸻

8. EMPLOYEE WITH HIGHEST SALARY

Question:
Store N employee records and find the employee with maximum salary.

Concepts:
Array of Structures

⸻

9. SORT STUDENT RECORDS

Question:
Sort students based on marks.

Concepts:
Structures
Sorting

⸻

10. SORT EMPLOYEES BY SALARY

Question:
Sort employee records in ascending salary order.

Concepts:
Structures
Bubble Sort

⸻

11. INVENTORY MANAGEMENT

Question:
Define a structure Product with product ID, name, quantity, and price.

Calculate total inventory value.

Concepts:
Structures
Arithmetic

⸻

12. LIBRARY MANAGEMENT

Question:
Define a structure Book with book ID, title, and author.

Store and display multiple books.

Concepts:
Array of Structures

⸻

13. BANK ACCOUNT

Question:
Define a structure Account with account number, name, and balance.

Perform deposit and withdrawal operations.

Concepts:
Structures
Functions

⸻

14. NESTED STRUCTURE

Question:
Define a structure Student containing another structure Date for date of birth.

Concepts:
Nested Structures

Example:

struct Date
{
int day;
int month;
int year;
};

struct Student
{
char name[50];
struct Date dob;
};

⸻

15. STRUCTURE AS FUNCTION ARGUMENT

Question:
Pass a structure to a function and display its contents.

Concepts:
Structures
Functions

⸻

16. STRUCTURE RETURN TYPE

Question:
Create a function that returns a structure.

Concepts:
Structures
Return Values

⸻

17. ARRAY OF STRUCTURES

Question:
Store details of N students and display all records.

Concepts:
Array of Structures

⸻

18. POINTER TO STRUCTURE

Question:
Access structure members using a pointer.

Example:

ptr->marks

Concepts:
Pointers
Structures

⸻

19. UNION VS STRUCTURE

Question:
Create both a structure and union and compare memory usage.

Concepts:
Structures
Unions

⸻

20. BIT FIELD STRUCTURE

Question:
Store flags using structure bit fields.

Example:

struct Status
{
unsigned int power : 1;
unsigned int error : 1;
unsigned int ready : 1;
};

Concepts:
Bit Fields
Embedded C

⸻

EMBEDDED INTERVIEW IMPORTANT STRUCTURE QUESTIONS

1. Array of Structures
2. Nested Structures
3. Structure Pointer
4. Structure as Function Argument
5. Structure Return Type
6. Structure vs Union
7. Bit Field Structures
8. Typedef with Structures
9. Memory Alignment in Structures
10. Padding in Structures

MEMORY TRICK

Single Record:
Structure

Many Records:
Array of Structures

Function Input:
Pass Structure

Function Output:
Return Structure

Memory Saving:
Union

Embedded Registers:
Bit Fields

For embedded C interviews, focus especially on:

* Array of structures
* Structure pointers (->)
* Structure vs Union
* Nested structures
* Bit-field structures
*/