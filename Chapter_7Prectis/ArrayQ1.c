#include<stdio.h>

int main(){
    int arr[5]={1,2,3,4,5};

    for (int i = 4; i >= 0 ; i--)
    {
        printf("%d ", arr[i]);
    if ( i != 0) {
        printf(" <-> ");
    }
    }
    printf("-> End\n");
    return 0;
}