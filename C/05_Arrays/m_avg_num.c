// //미션 1 사용자로부터 10개 숫자 입력
// 평균값 출력

#include <stdio.h>

int main(){

    int arr[10];
    int avg = 0; //초기값 설정 필수!!
    int sum = 0;

    //사용자에게 받을 숫자 10개
    for(int i=0; i<10; i++){

        printf("%d. number: ", i+1);
        scanf("%d", &arr[i]);
    }

    //평균값 출력
    for(int i=0; i<10; i++){

        sum += arr[i];
    }

    avg = sum/10;

    printf("total avg is: %d", avg);
    return 0;
}