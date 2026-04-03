// 미션 2 사용자로부터 7개 점수 입력 최고점, 최저점 출력

#include <stdio.h>

int main(){

    int arr[7];
    int i = 0;
    int max = 0;
    
    while (i<7){
        printf("%d number is : ", i+1); //사용자 점수 7개 받기
        scanf("%d", &arr[i]);

        if(i==0){
            max = arr[0];
        }
        
        if(max<arr[i]){ // 최고점
            max = arr[i];
        }
        i++;
    }

    int min = arr[0];
    int j = 1;

    while (j<7){

        if(min>arr[j]){ //최저점
            min = arr[j];
        }
        j++;
    }

    printf("max number is : %d\n min number is : %d\n", max, min);
    return 0;

}