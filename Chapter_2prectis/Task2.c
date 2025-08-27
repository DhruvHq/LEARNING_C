/*⚔️ Exercise 2: Calculator

👉 Write a program that:

Takes two numbers from the user.

Calculates sum, difference, product, quotient, remainder.

Prints results clearly.

(Hints: Use arithmetic + I/O)*/
#include <stdio.h>

int main() {
    int a, b;
    
    // Input
    printf("Enter Your First Number: ");
    scanf("%d", &a);

    printf("Enter Your Second Number: ");
    scanf("%d", &b);

    // Calculations
    int sum = a + b;
    int diff = a - b;
    int prod = a * b;
    int quot = a / b;   // Be careful: b must not be 0
    int rem  = a % b;

    // Output
    printf("\nResults:\n");
    printf("%d + %d = %d\n", a, b, sum);
    printf("%d - %d = %d\n", a, b, diff);
    printf("%d * %d = %d\n", a, b, prod);
    printf("%d / %d = %d\n", a, b, quot);
    printf("%d %% %d = %d\n", a, b, rem);

    return 0;
}
