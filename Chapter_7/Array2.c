// Online C compiler to run C program online
#include <stdio.h>


int main() {

int arr[3]={1,2,3};
    printf("enter 3 numbers :");
    for(int i = 0;i<3;i++){
        scanf("%d",&arr[i]);
    }
    printf("You entered: ");
    for(int i =0;i<3;i++){
        printf("%d",arr[i]);
    }
    printf("\n");
    
    printf("arr[2] is : %d", arr[2]);
    return 0;
}