//미션_ 문자열 길이구하기

// #include <stdio.h> 

// int main(){

//     int i=0;
//     char str[100];
    
//     printf(" Plz write message: ");
//     fgets(str, sizeof(str), stdin);

//     for (i=0; str[i] != '\0'; i++);
    
//     printf(" you write words length is : %d", i);
//     return 0;
// }

//while ver
#include <stdio.h>

int main(){

    int i=0;
    char str[100];
    
    printf(" Plz write message: ");
    fgets(str, sizeof(str), stdin);

    while(str[i] != '\0'){
        i++;
    }
    
    printf(" you write words length is : %d", i);
    return 0;
}