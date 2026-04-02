#include <stdio.h>

//함수 정의
int add(int a, int b) {
    return a+b ;
}

int main() {
    int result;

    result = add(3,5);
    printf("result: %d \n", result);

    return 0;
}