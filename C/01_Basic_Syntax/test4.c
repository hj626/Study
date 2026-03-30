#include <stdio.h>

int main() {
    //이름과 나이입력받기.
    int age;
    char name[20]; //최대 19글자까지 쓸수 있음.

    printf(" name : ") ;
    scanf( "%s", name); //문자열 자체가 주소값이니까 &는 안써도돼

    printf(" age: ");
    scanf("%d", &age);

    printf("name : %s\n age : %d", name, age);

    return 0;

}