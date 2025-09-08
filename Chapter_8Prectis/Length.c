// Program to check length of string

#include<stdio.h>
#include<string.h>

int main(){
    char str[]="SALMON BHAI";
    int i =0;
    int count = 0;

    while (str[i] != '\0' )
    {
        count++;
        i++;
    }
    printf("%d",count);
    
}

// We Can Also Do This Function Called strlen() But Since We Are Learning We Are Using Loops For Logic Bulding Purposes