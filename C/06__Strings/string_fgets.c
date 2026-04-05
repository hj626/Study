//문장 입력
// fgets는 C언어에서 표준 입력(키보드)이나 파일로부터 문자열을 읽어오는 함수

#include <stdio.h>

int main() {
    char sentence[50];

    printf("Enter a sentence: ");
    fgets(sentence, sizeof(sentence), stdin);

    printf("You wrote: %s", sentence);
    return 0;
    
}