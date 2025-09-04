#include<stdio.h>

int main(){
    int arr[5]={12,34,99,9,55};
    int key;
    int found = -1;

    printf("Enter Key to search :");
    scanf("%d",&key);

    for (int i = 0; i < 5; i++)
    {
        if (arr[i] == key)
        {
            found = i;
            break;
        }
    }
    if ( found != -1)
    {
        printf("Your Searched Element %d Is Found %d", key, found);
    }else{
        printf("Try Another Time");
    }
    
    return 0;
    
}