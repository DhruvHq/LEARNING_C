#include<stdio.h>

int main(){

    //While Loop Print 1 to 100
    int i = 1;
    while (i <= 100)
    {
        printf("%d->",i);
        i++;
    }if (i == 100);
    {
        printf("END");
    }
    
    //USE WHILE LOOP TO DO TASK IN WHICH USER HAS TO PUT CERTIN NUMBER FROM USER TILL SELECTED NUMBER GOT ENTRED
    int j = 10;
    int p;
    
    printf("Guess the number: ");
    scanf("%d", &p);

    while (p != j) {
        printf("Wrong! Try again: ");
        scanf("%d", &p);   // ask again inside loop
    }

    printf("Correct Number!\n");

    // Check If Entered Number Is Right Or Wrong
    int d=21120;
    int t;
    printf("Enter 6 Digit Pin: \n");
    scanf("%d",&t);

    while (d!=p)
    {
        printf("Hell Nooo Try Again ");
        scanf("%d",&t);
    }
    
    return 0;
    
}