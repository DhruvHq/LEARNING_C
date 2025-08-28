#include <stdio.h>

int main(){
    int age;
    int number;
    int class;
    int Grade;

    printf("ENTER AGE:\n");
    scanf("%d",&age);

    printf("ENTER number:\n");
    scanf("%d",&number);

    printf("ENTER class:\n");
    scanf("%d",&class);

    printf("ENTER Grade:\n");
    scanf("%d",&Grade);

    printf("%d Age Is",age);

    if (age >= 18) {
    printf("Good\n");
    } else {
    printf("Too young\n");
}
    
    if (number >=23)
    {
        printf("Sorry Not Allow\n");
    }else{
        printf("Good For You\n");
    }
    
    if (class==1)
    {
        printf("NOT IN\n");
    }else if (class==2)
    {
        printf("NOT IN\n");
    }else if(class==3){
        printf("NOT IN\n");
    }else{
        printf("We Will Updae You\n");
    }
    
    
    
}