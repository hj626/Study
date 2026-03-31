#include <stdio.h>

//점수 등급 만들기 90이상a, 80이상 b, 70이상 c,  나머지 F

int main() {
    int score;

    printf("your score: ");
    scanf("%d", &score);

    if (score >= 90) {
        printf("A \n");

    } else if (score < 70) {
        printf ("F \n");

    } else if (score >= 80 && score < 90) {
        printf ("B \n");
    
    } else {
        printf ("C \n");

    }

    return 0;

}