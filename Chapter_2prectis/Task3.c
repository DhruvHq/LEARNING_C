#include<stdio.h>
#include<math.h>

int main(){
    int Input;

    printf("Enter your prifered number \n");
    scanf("%d",&Input);

    for (int i = 1; i <= Input; i++)
    {
        if (i % 2 == 0)
        {
            printf("%d Is Even\n",i);
        }else{
            printf("%d Is Odd\n",i);
        }
        
    }
    return 0;
    
}