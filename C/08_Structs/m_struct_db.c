// 구조체로 이름+나이 입력후 출력.1명 입력.

#include <stdio.h>

struct Person {

    char name[3];
    int age;    
};

int main(){

    struct Person p;

    printf("name: ");
    scanf("%s", p.name);
    printf("age: ");
    scanf("%d", &p.age);

    printf("name: %s\nage: %d", p.name, p.age);

    return 0;
}
