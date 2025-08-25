#include <stdio.h>

// THIS PROGRAM WILL TAKE INPUT FROM USER AND DISPLAY IT  

// PROGRAM WILL START EXECUTING FROM HERE
int main() {

    // INTEGER VARIABLE TO STORE AGE
    int age;
    printf("How old are you programmer? \n");
    scanf("%d", &age); // %d is format specifier for integer input

    // CHARACTER ARRAY TO STORE NAME
    // char alone stores only 1 character, so we expand it to 50 to store full string
    char Name[50];
    printf("What's Your Name Pal? \n");
    scanf("%s", Name); // %s is format specifier for string input (no & needed for arrays)

    // DISPLAYING THE AGE
    printf("Your age is: %d\n", age);

    // DISPLAYING THE NAME
    printf("Good To See You: %s\n", Name);

    return 0; // PROGRAM ENDED SUCCESSFULLY
}

// (/* this are use for multyline commants */) 



/*
SOME OF THE FORMATE SPECIFIERS ARE :
%d → Integer (int), e.g., 20
%i → Integer (int), same as %d
%c → Single character, e.g., 'A'
%s → String / character array, e.g., "Dhruv"
%f → Float, e.g., 3.14
%lf → Double, e.g., 3.141592
%ld → Long integer, e.g., 600000
%lld → Long long integer, e.g., 1234567890
%u → Unsigned integer, e.g., 10 (cannot be negative)
%o → Octal integer, e.g., 012 → prints 10 in decimal
%x → Hexadecimal (lowercase), e.g., 0xA → prints a
%X → Hexadecimal (uppercase), e.g., 0xA → prints A
%p → Pointer address, e.g., memory location
%% → Prints a literal % symbol
*/