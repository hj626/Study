//1~100합
#include <stdio.h>

int main() {
    int sum = 0;

    for (int i = 1; i <= 100 ; i++){
        //시작값; 데드라인; 변화값

        sum += i;
        // sum은 결과값, i는 증가 및 변화하는 숫자

    }

    printf("1 to 100 sum: %d \n", sum);

    return 0;
}