// 미션2 정수 3개를 받고, 포인터를 사용해서 모든 값을 출력. 배열+포인터

#include <stdio.h>

int main() {

    int arr[3];
    int i =0;

    printf("number 3 plz: ");

    while(i<3){
        scanf("%d", &arr[i]);
        i++;
    }

    i =0; //초기값 설정

    while(i<3){
        printf("write number is: %d\n", *(arr+i));
        i++;

    }


// int arr[i];
// int *a = arr;
// arr[i] == *(a+i);
// arr[i] == *(arr+i); 

    return 0;
}