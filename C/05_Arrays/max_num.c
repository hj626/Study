//최대값 찾기

#include <stdio.h>

int main() {

    int arr[5];
    int max;

    for (int i= 0; i<5; i++){
        printf(" %d number: ", i+1);
        scanf("%d", &arr[i]);

    }

    max = arr[0];

    for(int i= 0; i<5; i++){
        if(arr[i]>max){
            max=arr[i];

        }
    }

    printf("max number is : %d", max);

    return 0;
}