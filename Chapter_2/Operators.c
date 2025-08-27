#include <stdio.h>

int main(){
    int a = 10, b = 3;
printf("%d\n", a + b);  // 13
printf("%d\n", a - b);  // 7
printf("%d\n", a * b);  // 30
printf("%d\n", a / b);  // 3 (integer division)
printf("%d\n", a % b);  // 1 (remainder)

int x = 5, y = 10;
printf("%d\n", x == y);  // 0 (false)
printf("%d\n", x != y);  // 1 (true)
printf("%d\n", x < y);   // 1 (true)

int e = 5, d = 10;
printf("%d\n", (e > 0 && d > 0)); // 1 (true, both positive)
printf("%d\n", (e > 0 || d < 0)); // 1 (true, one is true)
printf("%d\n", !(e > 0));         // 0 (false, since a>0 is true)

}