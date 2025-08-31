#include <stdio.h>

void changeByValue(int x){
    x = 50; // changes local copy
}

void changeByReference(int *x){
    *x = 50; // changes original
}

int main(){
    int num = 10;
    changeByValue(num);
    printf("After pass by value: %d\n", num);

    changeByReference(&num);
    printf("After pass by reference: %d\n", num);
    return 0;
}
