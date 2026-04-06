// 미션1. 두 변수 값 바꾸기(swap)

#include <stdio.h>

void swap(int *a, int *b){ //함수 만들때 ()안에 쓰이는 int *a는 int형의 '주소를 담을 준비가 되어있다는 선언임!!! 
    //그래서 함수를 사용할때는 주소를 넣어줘야함.
    //즉 이 안에 주소를 넣으면 함수를 실행할떄 그 주소에 가서 값을 가져오겠다는 뜻임!!!
    
    int temp = *a; //*a를 템프에 넣어
    *a = *b; //*b를 *a에 넣어
    *b = temp; //템프를 *b에 넣어

    // 그러면 자리바꾸기 끝!

}


int main(){

    int i, j;

    printf("write two number: ");
    scanf("%d, %d", &i, &j); //사용자가 받은 값, 꼭 기억해!! & 는 필수야!

    int *a = &i;
    int *b = &j;

    swap(a, b);

    printf("change number is : %d, %d\n", *a, *b);

    
    // int p = 10
    // int *a 변수값 = &p 주소값
    // *a = 10, p    a = &p
    
    return 0;
}