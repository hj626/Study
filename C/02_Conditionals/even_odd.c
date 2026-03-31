//짝수와 홀수

#include <stdio.h>
int main() {
    int num;

    printf("Enter a number: ");
    scanf("%d", &num); //%d는 &num의 주소에 저장해.

    if (num % 2 == 0) {
        printf("Even number \n"); //짝수
    } else {
        printf("Odd number \n"); //홀수
    }
    
    return 0;
    
}