/*
📌 Input from user:

Student Name (string, only alphabets allowed)

Age (integer, 15–30 allowed)

Category (GEN / OBC / SC / ST)

Marks in Entrance Exam (0–100)

📌 Admission Rules (based on category + marks):

General (GEN): Admission if marks ≥ 35 and < 50 → General seat.

OBC: Admission if marks ≥ 45 and ≤ 100.

SC/ST:

Arts → Needs ≥ 80 marks

Medical → Needs ≥ 85 marks

B.Tech → Needs ≥ 95 marks

📌 Output required:

If eligible → Print “Congrats <Name>, you got admission in <stream> under <category> quota!”

If not eligible → Print “Sorry <Name>, you didn’t qualify for admission.”
*/

#include <string.h>
#include<stdio.h>

int main(){
   char Name[50];
   int Age;
   char Gender;
   float Marks;
   float E_E_Score;
   char Category[50];
   char Course[50];

   printf("WELCOME TO STUDENT ADMISSION PORTAL \n\n");
   printf("FILL THE DETAILS GIVEN BELOW: \n\n");

   // Name
   printf("Please Enter Your Name: ");
   scanf("%s", Name);
   printf("Welcome To The Door Of Success %s\n", Name);

   // Age
   printf("Enter Your Age %s: ", Name);
   if (scanf("%d", &Age) != 1) {
       printf("Invalid input! Age must be a number.\n");
       return 1;
   }
   printf("You Are %d Years Old %s\n", Age, Name);

   // Gender
   printf("Please Select Your Gender (M/F): ");
   scanf(" %c", &Gender);
   if (Gender == 'M' || Gender == 'm'){
      printf("Thanks For The Detail Sir\n");
   } else if (Gender == 'F' || Gender == 'f'){
      printf("Thanks For The Detail Ma'am\n");
   } else {
      printf("Sorry, We Can't Recognize You\n");
   }

   // Marks
   printf("Enter Your 10th Result: ");
   scanf("%f", &Marks);
   if (Marks >= 80){
      printf("Well Done! Quite A Good Score %.2f\n", Marks);
   } else {
      printf("Alright, Thanks For The Info %.2f\n", Marks);
   }

   // Entrance Exam
   printf("Provide Us With Your Entrance Exam Score (from 100): ");
   scanf("%f", &E_E_Score);

   if (E_E_Score >= 80){
      printf("Well Done\n");
   } else if (E_E_Score >= 50 && E_E_Score <= 79){
      printf("Ok, We Will Keep It In Mind\n");
   } else if (E_E_Score >= 25 && E_E_Score <= 49){
      printf("Huh, You Got Fumbled By An Entrance Exam\n");
   } else {
      printf("Thats a very low score!\n");
   }

   // Category
   printf("By The Way Which Category You Come Under (GEN/OBC/SC/ST): ");
   scanf("%s", Category);
   printf("Ok! Ill  Keep That In Mind %s\n", Category);
   
   // Course
   printf("Last Question, Which Course You Want To Enroll In (Engineering / Medical / Arts): ");
   scanf("%s", Course);

   printf("\nLets See Your Details................\n\n");

   //CHECK AGE
   if (Age>=17 || Age<=30)
   {
      printf("You Are Allowed To Check\n");
   }else{
      printf("Sorry You Cant\n");
   }
   
   //Category + Admission Rules (main logic)

   // Check AGE
if (Age >= 15 && Age <= 30) {
    printf("You are allowed to check eligibility.\n");
} else {
    printf("Sorry %s, age not in range (15–30).\n", Name);
    return 0; // stop program
}

// Category + Admission Rules (main logic)
if (strcmp(Category, "GEN") == 0 || strcmp(Category, "gen") == 0) {
    if (E_E_Score >= 35 && E_E_Score < 50) {
        printf("Congrats %s! You got admission in %s under General category.\n", Name, Course);
    } else {
        printf("Sorry %s, you didn’t qualify under General category.\n", Name);
    }
}
else if (strcmp(Category, "OBC") == 0 || strcmp(Category, "obc") == 0) {
    if (E_E_Score >= 45) {
        printf("Congrats %s! You got admission in %s under OBC category.\n", Name, Course);
    } else {
        printf("Sorry %s, you didn’t qualify under OBC category.\n", Name);
    }
}
else if ((strcmp(Category, "SC") == 0 || strcmp(Category, "sc") == 0) ||
         (strcmp(Category, "ST") == 0 || strcmp(Category, "st") == 0)) {
    if ((strcmp(Course, "Arts") == 0 && E_E_Score >= 80) ||
        (strcmp(Course, "Medical") == 0 && E_E_Score >= 85) ||
        (strcmp(Course, "Engineering") == 0 && E_E_Score >= 95)) {
        printf("Congrats %s! You got admission in %s under %s category.\n", Name, Course, Category);
    } else {
        printf("Sorry %s, you didn’t qualify for admission under %s category.\n", Name, Category);
    }
}
else {
    printf("Invalid category entered. Please restart and enter GEN/OBC/SC/ST only.\n");
}


   return 0;
}
