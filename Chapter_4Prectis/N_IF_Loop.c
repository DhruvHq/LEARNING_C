#include<stdio.h>

int main(){

    // Print * Stuff
    for (int i = 0; i < 5; i++)
    {
        for (int j = 0; j < 5; j++)
        {
            printf("*");
        }
        printf("\n");
    }

//Print  *
// *
// **
// ***
// ****
// *****

    for (int i = 0; i <= 5; i++)
    {
        for (int j = 0; j < i; j++)
        {
            printf("*");
        }
        printf("\n");
    }
        printf("\n");

    //print backword
    for (int i = 5; i >= 1; i--)
    {
        for (int j = 1; j <= i; j++)
        {
            printf("*");
        }
        printf("\n");
    }

    //PRINTING TABLE 123 123 123 123

    for (int i = 1; i <= 3; i++)
    {
        for (int j = 1; j <= 3; j++)
        {
            printf("%d",j);
        }printf("\n");   
    }
    printf("\n");

    for(int i =1; i<=5;i++){
        for (int j = 0; j < i; j++)
        {
            printf("%d",j);
        }printf("\n");
    }
    printf("%d");
    
    for (int i = 1; i <= 10; i++)
    {
        for (int j = 1; j <= 10; j++)
        {
            // "\t" is an escape sqquence in c
            printf("%d x %d = %d\t",i, j, i*j);
        }printf("\n");
    }
    
    
    return 0;
}