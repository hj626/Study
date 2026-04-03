// 미션 2 사용자로부터 7개 점수 입력 최고점, 최저점 출력

#include <stdio.h>

int main() {

    int arr[7];
    int max;

    for (int i=0; i<7; i++){  //사용자 점수와 최대값

        printf("%d number: ", i+1);  
        scanf("%d", &arr[i]);

        if(i==0){
            max = arr[0];
        }

       if(max <arr[i]){
        max = arr[i];
        
        }
    }

    int min = arr[0]; //최소값
    for (int i=1 ; i<7; i++){

        if(min > arr[i]){
            min = arr[i];
        }
    }

    printf ("max number is: %d \n min number is: %d\n", max, min);
    return 0;

}


