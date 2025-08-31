#include <stdio.h>

// Function prototypes
int add(int, int);
int subtract(int, int);
int multiply(int, int);
float divide(int, int);

int main(){
    int x = 20, y = 5;
    printf("Add: %d\n", add(x, y));
    printf("Subtract: %d\n", subtract(x, y));
    printf("Multiply: %d\n", multiply(x, y));
    printf("Divide: %.2f\n", divide(x, y));
    return 0;
}

int add(int a, int b){ return a+b; }
int subtract(int a, int b){ return a-b; }
int multiply(int a, int b){ return a*b; }
float divide(int a, int b){ return (float)a/b; }
