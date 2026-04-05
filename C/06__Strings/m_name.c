//미션 이름 입력 Hello 이름 출력 , 공백 포함

#include <stdio.h>

int main(){

    char name[20];

    printf("Whats your name? : ");
    fgets(name, sizeof(name), stdin);

    printf("Hello %s \n", name);

    return 0;
}
