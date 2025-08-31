#include<stdio.h>

void TakeData(char name[], int age);
int main(){
    TakeData("Dhruv",19);
    TakeData("Batman",20);
}
void TakeData(char name[], int age){
    printf("My Name Is %s,and my age is %d \n",name,age);
}