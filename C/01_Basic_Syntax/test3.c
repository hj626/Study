#include <stdio.h>

int main() {
    int age;
    
    printf("age : ");
    scanf("%d", &age); //scanf는 사용자가 입력할 데이터, 그것을 age 주소에 넣어.
    
    printf(" 5years later, you will be %d years old, \n", age+5);
    return 0;
}