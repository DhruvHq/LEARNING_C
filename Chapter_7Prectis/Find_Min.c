// FIND MINIMUM FROM ARRAY

#include<stdio.h>

int main(){
    int arr[5]={24,11,99,33,05};
    int min = arr[0];

    for (int i = 1; i < 5; i++)
    {
        if (arr[i] < min)
        {
            min = arr[i];
        } 
    }
    printf("Min Is: %d", min);
    return 0;
    
}