#include <stdio.h>

int main() {
    int age;
    int citizen;

    printf("Enter your age: ");
    scanf("%d", &age);

    printf("Are you a citizen? (1 for Yes, 0 for No): ");
    scanf("%d", &citizen);

    if (age >= 18) {   // First condition
        printf("You are old enough to vote.\n");

        if (citizen == 1) {  // Nested if (inside age condition)
            printf("✅ You are eligible to vote!\n");
        } else {
            printf("❌ You cannot vote because you are not a citizen.\n");
        }
    } else {
        printf("❌ You are too young to vote.\n");
    }

    return 0;
}
