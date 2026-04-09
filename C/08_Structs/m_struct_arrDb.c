//여러명 관리 (배열+struct)

#include <stdio.h>

struct Person{
    char name[3];
    int age;
};

int main(){

    struct Person p[3];

    for(int i=0; i<3; i++){
        
        printf("name: ");
        scanf("%s", p[i].name);
        
        printf("age: ");
        scanf("%d", &p[i].age);
    }

    int i = 0;

    while (i<3){        
        printf("name: %s / age: %d", p[i].name, p[i].age);
        i++;
    }

    return 0;
}