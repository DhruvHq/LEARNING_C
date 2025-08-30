#include<stdio.h>

int main(){
    
    //FOR
    for (int i = 0; i < 5; i++)
    {
        printf("*");
    }

    //WHILE
    int course =0;
    while (course < 5)
    {
        printf("\nValue Is 5\n");
        course++;
    }

    //DO WHILE
    int x=5;
    do
    {
        printf("\nGames Gone\n");
        x++;
    } while (x<0);

    //Nested For
    for (int d = 1; d <= 5; d++)
    {
        for (int h = 1; h < 5; h++)
        {
           printf("%d",h);
        }printf("\n");
    }
return 0;
}