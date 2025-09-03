#include <stdio.h>

int main() {
    int x = 10;          // A normal integer variable
    int *p;              // Declare a pointer to an integer

    p = &x;              // Store the address of x in pointer p

    // Printing values and addresses
    printf("Value of x: %d\n", x);          // Prints the value of x
    printf("Address of x: %p\n", &x);       // Prints the address of x
    printf("Value stored in p: %p\n", p);   // Pointer itself stores address of x
    printf("Value at address p points to: %d\n", *p); // Dereference p → value of x

    return 0;
}
