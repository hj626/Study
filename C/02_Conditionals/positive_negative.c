// 양수 , 음수

#include <stdio.h>

int main() {
    int num;

    printf("Enter a number: ");
    scanf("%d", &num);

    if (num > 0){
    
        printf("positive number \n"); //양수
        
    } else if(num < 0) {
        printf("negative number \n"); //음수
    } else {
        printf("0\n");
    }

    return 0;
    
}