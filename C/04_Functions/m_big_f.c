//두 수 중 큰 수 반환 함수

#include <stdio.h>

int getMax(int a, int b){
    if (a>b) 
        return a;
     else
        return b;
}
//int getMax(inta, intb)
//    return (a>b) ? a:b; 으로도 가능함.


int main() {

    int a;
    int b;

    printf(" plz write two number: ");
    scanf("%d %d", &a, &b);

    printf("big number is: %d", getMax(a, b));
    return 0;
}