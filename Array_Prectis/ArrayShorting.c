#include<stdio.h>

//SORTING AN ARRAY

int main(){
    int arr[5]={12,3,94,8,0};
    int n= 5;

    for (int i = 0; i < n; i++)
    {
        for (int j = i+1; j < n; j++)
        {
            if (arr[j] < arr[i])
            {
                int temp = arr[i];
                arr[i] = arr[j];
                arr[j] = temp;
            }
        }
    }
    printf("Sorted Array Is ");
    for (int i = 0; i < n; i++)
    {
        printf("%d -> ", arr[i]);
        if (i == n-1) {+
        printf("End");
    }
}
    
    return 0;
}