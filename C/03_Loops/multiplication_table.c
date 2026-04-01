//구구단

#include <stdio.h>

int main() {
    int num;

    printf("plz write num: ");
    scanf("%d", &num);

    for(int i = 1; i <= 9; i++){
        printf("%d x %d = %d\n", num, i, num*i);
    }

    return 0;
}