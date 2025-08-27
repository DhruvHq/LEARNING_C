/*
⚔️ Exercise 1: Age & Voting

👉 Write a C program that:

Takes name and age from the user.

If age >= 18 → print "Hello <name>, you can vote!"
Else → print "Sorry <name>, you’re too young!"

(Hints: Use type declaration, input/output, control)*/

#include<stdio.h>
#include<math.h>

int main(){

    int Age;
    char Name[50];
    printf("GIVE US YOUR DETAILS AND WE CAN CHACK IF YOU CAN DRINK OR NOT :\n\n");

    printf("What's Your Name ? \n");
    scanf("%s",Name);

    printf("Whats Your Age %s\n",Name);
    scanf("%d",&Age);

    if (Age>=18)
    {
        printf("Alright! You Can Go Into The Bar");
    }
    else {
    printf("I AM REALLY SORRY SON! BUT YOU CAN'T");
    }

    return 0;
}