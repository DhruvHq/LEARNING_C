#include<stdio.h>

int add(int a, int b);

int main(){
    int sum= 10+20;
    printf("Sum is %d\n",sum);
    return 0;
}
int add (int a, int b){
    return a+b;
}