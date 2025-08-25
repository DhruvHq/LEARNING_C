/*
Input & Output

Take age (int) and initial (char) from the user.

Print them back neatly.
*/

#include<stdio.h>  // Standard Input/Output library for printf and scanf

int main(){

    int Roll_Number;   // Variable to store student's roll number (integer)
    char Name[50];     // Character array (string) to store student's name (up to 49 chars + '\0')

    printf("Check Your Attendence \n\n"); // Prints heading, '\n\n' gives two line breaks

    // Asking for Roll Number
    printf("Enter Your Roll Number Here :\n");
    scanf("%d",&Roll_Number);   // %d = integer format specifier, &Roll_Number gives the address

    // Asking for Name
    printf("If You Are Kind Enough To Give Us Your Name :\n");
    scanf("%s",Name);   // %s = string format specifier, Name itself is already an address (no & needed)

    // Display the entered details back to user
    printf("Take A Good Look %s\n",Name);
    printf("Roll Number:%d\n Your Name (I KNOW YOU KNOW YOUR NAME BUT ITS PART OF THE PROCESS) :%s\n Your Attendence is Only 60 (Very Low)\n You Better Attend Every Lecture Pal",Roll_Number, Name);

    return 0;  // Program ends successfully
}
