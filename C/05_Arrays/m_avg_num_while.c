// 사용자로부터 10개 숫자 입력 평균값 출력

#include <stdio.h>

int main() {

    int arr[10];
    int avg =0;
    int i =0;
    int sum = 0;

    while(i < 10){
        
        printf("%d. number is : ", i+1);
        scanf("%d", &arr[i]);
    
        sum += arr[i];
        i++;
    }

    avg = sum/10;

    printf("total avg is : %d" , avg);
    return 0;
}

