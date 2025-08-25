#include <stdio.h>

// From here program will start executing
int main() {

    // int usually stores 4 bytes (depends on system)
    int age = 20;
    printf("Default age is : %d \n", age);

    // char always stores 1 byte (single character)
    char Name = 'D';
    printf("Given Char Of Name Is : %c \n", Name);

    // long usually stores 4 or 8 bytes (system dependent, here we use %ld for printing)
    long Data = 600;
    printf("Example of Long is : %ld \n", Data);

    // float usually stores 4 bytes (decimal values, up to ~7 digits precision)
    float Pi = 3.14f;
    printf("Float Example Is : %f \n", Pi);

    // double usually stores 8 bytes (decimal values, more precision than float)
    double A = 222.55;
    printf("Value Of Double Is : %lf \n", A);

    return 0; // program executed successfully
}
