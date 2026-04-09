#include <stdio.h>

struct Person{
    char name[20];
    int age;
};

int main(){

    struct Person p[2];
    
    for(int i=0; i<2; i++){

        printf("name: ");
        scanf("%s", p[i].name);

        printf("age: ");
        scanf("%d", &p[i].age);
    }

    for(int i=0; i<2; i++){
        printf("%s %d\n", p[i].name, p[i].age);
    }

    return 0;

}