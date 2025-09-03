// FIND MAX FROM ARRAY

#include<stdio.h>

int main(){
    int arr[5]={55,43,67,21,99};
    int max = arr[0];

    for (int i = 1; i < 5; i++)
    {
    if (arr[i]>max)
    {
        max=arr[i];
    }}
    printf("Max = %d",max);
    return 0;


}