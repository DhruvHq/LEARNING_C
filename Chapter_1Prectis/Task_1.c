/* Variables & Data Types
Declare 3 variables: int, float, char.
Assign values and print them using the correct format specifiers.*/


#include <stdio.h>
#include <stdlib.h>

// PROGRAM STARTS EXECUTING
int main() {

    // VARIABLES DECLARATION
    int Number = 36;  // Roll number as integer
    float Marks = 7.86f;  // CGPA as float
    char Name[50] = "Dhruv"; // Full name as string

    // OUTPUT
    printf("Result Of Diploma From G.P.V\n");
    printf("Roll Number: %d\n", Number); // %d for integer
    printf("Name of the student: %s\n", Name);  // %s for string
    printf("Great! You Just Passed, Needs Lots Of Improvement: %.2f\n", Marks); // %.2f for 2 decimals
    printf("We Wish You Good Luck For Future!\n");

    return 0; // Program executed successfully
}
