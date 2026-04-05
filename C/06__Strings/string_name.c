//이름 출력

#include <stdio.h>

int main(){
    char name[20];

    printf("Enter your name: ");
    scanf("%s", name);

    printf("Hi, %s \n", name);
    return 0;
}