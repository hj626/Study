#include <stdio.h>

//사용자 나이 입력 → 성인(Adults) / 미성년자(minor)

int main() {

    int age;

    printf(" your age: ");
    scanf("%d", &age);

    if ( age > 20) {
        printf(" Adults \n");

    } else {
        printf ("minor \n");
    }

    return 0;

}