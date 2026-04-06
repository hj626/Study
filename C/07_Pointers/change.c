// 값 바꾸기

#include <stdio.h>

int main() {
    int a = 10;
    int *p = &a;

    *p = 20;

    printf("a is : %d \n", a);

    return 0;

}