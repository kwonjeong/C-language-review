#include <stdio.h>
#include <string.h>
// 71-8 연습문제 : 텍스트 파일 복사 프로그램 만들기

int main() {
    int count;
    char buffer[5] = { 0, }; // 문자 4바이트, NULL 1바이트

    FILE *src = fopen("hello.txt", "r");
    FILE *dest = fopen("hello1.txt", "w");

    while(feof(src) == 0){
        count = fread(buffer, sizeof(char), 4, src); // 1바이트 크기로 4번 읽고 횟수 count 저장
        printf("%s", buffer);
        fwrite(buffer, sizeof(char), count, dest); // hello1에 1바이트 크기로 count 횟수만큼 저장
        memset(buffer, 0, 5);
    }

    fclose(dest);
    fclose(src);

    return 0;
}
