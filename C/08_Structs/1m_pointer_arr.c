#include <stdio.h>

void doubleArray(int *arr, int size){ //*arr 부분에 주소값을 넣어, int size는 배열의 크기(몇개의 숫자가 들어갔는지)

    for(int i=0; i<5; i++){
        *(arr+i) *= 2; //arr의 i번째 있는 주소에 있는 값에 2를 곱해.
    }
}

int main() {

    int arr[5];
    int i = 0;
    while(i<5){
        printf("%d. number : ", i+1);
        scanf("%d", &arr[i]);
        i++;
    }

    doubleArray(arr,5);

    for(int i = 0; i<5; i++){
        // for(int i = 0; i<size; i++){ 이렇게도 사용가능함.
        printf("%d.double number : %d\n", i+1, *(arr+i));
    }

    return 0;

}