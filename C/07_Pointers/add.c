// 주소확인

#include <stdio.h>

int main() {
    int a = 10;
    int *p = &a;

    printf("a is : %d\n", a);
    printf("address of a : %p\n", &a);
    printf("p is (address of value) : %p\n", p);
    printf("pointed to by *p : %d \n", *p);

    return 0;
}