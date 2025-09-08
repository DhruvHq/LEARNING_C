//Program To Check If Given String Is Palandrom Or Not

#include<stdio.h>

int main(){
char str[]="NITIN";
// Step 1: Find length
int length = 0;
while(str[length] != '\0') {
    length++;
}
int start = 0;
int end = length - 1;

// Step 2: Compare
while(start < end) {
    if(str[start] != str[end]) {
        printf("Not what you are looking for");
    }
    start++;
    end--;
}
// Step 3: If finished, it's palindrome
    
return 0;

}