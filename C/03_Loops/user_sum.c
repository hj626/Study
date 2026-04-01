//사용자 입력값까지 합 구하기.

#include <stdio.h>

int main() {

    int user_num;
    int sum = 0;
    int i = 0;

    printf("plz write number: ");
    scanf("%d", &user_num);

    while(sum<=user_num){
        
        i+= sum;
        sum++;        
    }

    printf ("sum number is %d", i);

    return 0;
}