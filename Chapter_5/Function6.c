#include <stdio.h>

// Factorial using recursion
int factorial(int n);

int main(){
    int num = 5;
    printf("Factorial of %d = %d\n", num, factorial(num));
    return 0;
}

int factorial(int n){
    if(n==0) return 1;  // base case
    return n * factorial(n-1); // recursive call
}
