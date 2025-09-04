//Check if elements of array are duplicate or not

#include<stdio.h>

int main(){
    int arr[5]={1,3,1,12,3};

    for (int i = 0; i < 5; i++)
    {
        for (int j = i + 1; j < 5; j++)
        {
            if (arr[i] == arr[j])
            {
                printf("Duplicate Array Found %d\n", arr[i]);
            }
        }
    }
    return 0;
    
}