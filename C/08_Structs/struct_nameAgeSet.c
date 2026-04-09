#include <stdio.h>

struct Person {
    char name[20]; //문자 배열
    int age;
};

int main(){

    struct Person p;
    printf("name : ");
    scanf("%s", p.name); //문자배열에서 입력값 전체를 뽑을때는 & 안들어감

    printf("age : ");
    scanf("%d", &p.age);

    printf("name: %s, age: %d", p.name, p.age);    

    return 0;
}
