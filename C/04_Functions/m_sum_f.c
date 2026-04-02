//1~N 합 구하는 함수
#include <stdio.h>

int sumTon(int n){
    
    int sum =0;

    for (int i= 1; i<=n ; i++)
    
    sum += i;
    return sum;
}

int main() {

    int result, n;

    printf("plz write number: ");
    scanf("%d", &n);

    result = sumTon(n);
    printf("total sum To n is: %d \n", result);

    return 0;

}
