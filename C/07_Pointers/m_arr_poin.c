// 미션2 정수 3개를 받고, 포인터를 사용해서 모든 값을 출력. 배열+포인터

#include <stdio.h>


int main(){

    int arr[3];
    int *p = arr;
    
    printf("three number plz : ");

    for(int i=0; i<3; i++){

    scanf("%d", &arr[i]);

    }

    for(int i=0; i<3; i++){

    printf("%d.number: %d \n", i+1, *(p+i));

    }
    
    // int a = 10;
    // int *p = &a;
    // arr[i] == *(arr+i) arr 배열의 i번쨰 주소에 가서 값을 가져와

    return 0;
}
