#include <stdio.h>

int globalVar = 10;  // global scope

void test(){
    int localVar = 5; // local scope
    printf("Inside function: global=%d, local=%d\n", globalVar, localVar);
}

int main(){
    test();
    printf("Outside function: global=%d\n", globalVar);
    // printf("%d", localVar); // Error, localVar not visible here
    return 0;
}
