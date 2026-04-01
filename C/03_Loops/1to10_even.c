//1~10 짝수만 출력
#include <stdio.h>

int main(){
    

    for(int i = 1; i <= 10; i++) {

        if(i%2==0){
        printf("even number is %d \n", i);

        }
        
    }

    return 0;
}