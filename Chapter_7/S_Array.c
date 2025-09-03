// STATIC ARRAY DECLARATION AND CREATION 

#include<stdio.h>
#include<stdlib.h>

//Creating Array
int arr[5]={11,12,13,14,15};


int main(){
//PRINTING ARRAY

    printf("%d \n", arr[0]);
    printf("%d\n", arr[4]);

    //Changing in array
    arr [0]=99;
    printf("Updated Index 0 Is\n");
    printf("%d\n", arr[0]);

    // using loops with array 
    for (int i = 0; i <= 4; i++)
    {
        printf("%d -> ", arr[i]);

        if (arr[i] == arr[4])
        {
            printf("Over\n");
        }
        
    }
    
    //Array & Address (intro to pointers)

    printf("Address Of Arr[0] Is %p\n",&arr[0]);
    printf("Address Of Arr[1] Is %p\n",&arr[1]);

}