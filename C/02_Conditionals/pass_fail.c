#include <stdio.h>

int main() {
    int score;

    printf("Enter your score: ");
    scanf("%d", &score);

    if (score >= 60) {
        printf("Pass \n");
    } else {
        printf("Fail \n");
    }

    return 0;
}