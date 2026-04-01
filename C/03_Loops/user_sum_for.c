//사용자 입력 합 for문

#include <stdio.h>

int main() {

    int num;
    int i;
    int j =0;

    printf("plz write number : ");
    scanf("%d", &num);

    for(i = 1; i<= num; i++){
        j += i;
    }

    printf("sum is %d", j);
    return 0;
    
}