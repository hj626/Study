//1~n 합 구하는 함수 while문 ver

#include <stdio.h>

int sumTon(int n){

    int sum = 0;

    while(1<=n){

        sum += n;
        n--;
    }
    return sum;
}

int main() {

    int n;
    printf("plz write number: ");
    scanf("%d", &n);

   int result = sumTon(n);
    printf("Total sum To n is : %d", result);

    return 0;
    
}