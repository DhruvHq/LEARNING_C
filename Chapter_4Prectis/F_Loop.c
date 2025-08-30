#include <stdio.h>

int main(){

    // PRINT 1 TO 10 NUMBERS USING FOR LOOP
    for (int i = 1; i <= 10; i++)
    {
        printf("%d\n",i);
    }

    printf("\n");

    //PRINT 10 TO 1 NUMBERS USING FOR LOOP
    for (int i = 10; i >= 1; i--)
    {
        printf("%d\n",i);
    }


    //PRINT EVER EVEN NUMBER BETWEEN 1 TO 20 USING FOR LOOP

    for (int j = 1; j <= 20; j++)
    {
        if ( j % 2 == 0)
        {
            printf("%d-> ",j);
        }if (j == 20)
        {
            printf("END");
        }
        
    }

        printf("\n");

    // Print Table Of 5 Using Loop

    int number = 5;
    for (int i = 1; i <= 10; i++)
    {
        printf("%d x %d = %d\n", number, i, number*i);
    }
    

    return 0;
}