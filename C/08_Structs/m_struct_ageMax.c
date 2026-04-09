// 최고 나이 찾기

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

    int max=0;
    // int max=p[0].age;  이게 정석방식임.
    int i = 0;

    while (i<3){
            
        if(max<p[i].age){

            max = p[i].age;
         } //else {
        //     max;
        // }
        i++;
    }

    printf("%d", max);

    return 0;

}
