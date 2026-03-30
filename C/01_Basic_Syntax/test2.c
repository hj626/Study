#include <stdio.h>

int main() {
    int age;

    printf(" age : ");
    scanf("%d", &age);
    
    printf("10 years later, you will be %d years old\n", age + 10);

    return 0;
}