
#include <stdio.h>

int isEven(int num){
    if (num % 2 == 0 )
        return 1;
    else
        return 0;
}

int main() {
    int num;

    printf("Enter number: ");
    scanf("%d", &num);

    if ( isEven(num)) {
        printf("Even\n");

    } else {
        printf("Odd \n");
    }

    return 0;
    
}