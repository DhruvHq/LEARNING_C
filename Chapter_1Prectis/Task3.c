/*
Practice with Strings

Task:
1. Take first name and last name separately using scanf("%s").
2. Take the first letter of father's name as a single character.
3. Print the result in the format: FirstName LastName F
*/

#include <stdio.h>

// Program execution starts from main()
int main() {
    // Declare an array (string) to store the first name
    // 50 chars = enough space for most names
    char F_Name[50];
    printf("Enter Your First Name:\n");
    scanf("%s", F_Name);  // %s reads a string (no spaces allowed)

    // Declare another array (string) to store the last name
    char L_Name[50];
    printf("Enter Your Last Name:\n");
    scanf("%s", L_Name);  // again, %s for string input

    // Declare a single char variable to store father's initial
    char Word;
    printf("Enter First Letter Of Your Father's Name:\n");
    // Note: the space before %c is IMPORTANT
    // Without it, scanf() would read the leftover '\n' from previous input
    scanf(" %c", &Word);

    // Print everything together
    // %s prints a string, %c prints a character
    // Added spaces in between for readability
    printf("I found out your full name is: %s %s %c\n", F_Name, L_Name, Word);

    return 0;  // Successful program termination
}
