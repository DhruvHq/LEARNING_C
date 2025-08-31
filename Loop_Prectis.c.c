#include<stdio.h>
int main(){
    for (int i = 0; i <= 5; i++)
    {
        printf("*");
    }
    printf("\n");

    for (int i = 1; i <= 5; i++)
    {
        for (int j = 1; j <= i; j++)
        {
            printf("*");
        }printf("\n");
    }
    printf("\n");
    
    for (int i = 5; i >= 1; i--)
    {
        for (int j = 1; j <= i; j++)
        {
            printf("*");
        }printf("\n");
        
    }

    int i=1;
    while (i <= 100)
    {
        printf("%d -> ",i);
        i++;

    }if (i == 100)
    {
       printf("End");
    }else
    {
        printf("End");
    }
    
    return 0;
    
    
}