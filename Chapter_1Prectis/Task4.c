/*Mini-Project

Ask the user for:
Name
Age
Favorite number
Print a message:
Hello Name! At Age, your favorite number is X.*/

#include<stdio.h>
int main(){

    char Name [50];
    int Age;
    int Number;

    printf("Give Me Asked Details :\n\n");

    printf("Whats Your Name Pal?\n");
    scanf("%s", Name);
    printf("How Old Are You Pal?\n");
    scanf("%d",&Age);
    printf("If You Are Kind Enough To Share Your Favorit Number :\n\n");
    scanf("%d",&Number);

    printf("Hello %s You Are %d Years Old And Your Favorit Number Is %d",Name, Age, Number);

    return 0;

}
