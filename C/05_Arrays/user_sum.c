//5개의 숫자 입력 후 합

#include <stdio.h>

int main() {
    int arr[5];
    int sum = 0;

    //사용자 입력
    for(int i=0; i<5; i++){
        printf("number %d:  ", i+1);
        scanf("%d", &arr[i]);

    }

    //합
    for(int i= 0; i<5; i++){
        sum += arr[i];

    }

    printf("total sum is : %d", sum);
    return 0;
}