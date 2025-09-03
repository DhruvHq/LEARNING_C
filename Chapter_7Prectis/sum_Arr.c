#include<stdio.h>

int main(){
    int arr [2][3] = {
        {11,22,33}, {12,24,36}
    };
    int sum = 0;

    for (int i = 0; i < 2; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            sum += arr[i][j];
        }
        
    }
    printf("SUM = %d", sum);
    
    return 0;
}