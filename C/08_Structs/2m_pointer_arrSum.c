#include <stdio.h>

int sumArray(int *arr, int size){

    int i=0;
    int sum=0;  

    while (i<size){ 
        sum += *(arr+i);
        i++;
    }
    return sum;
}

int main() {

    int arr[5];

    for(int i=0; i<5; i++){
        printf("%d. number: ", i+1);
        scanf("%d", &arr[i]);
    }    
    
    int i=0;

    printf("sum number is: %d",  sumArray(arr, 5));

    return 0;
}