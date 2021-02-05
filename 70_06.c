#include <stdio.h>
#include <string.h>
// 70-6 연습문제 : 파일에 문자열 쓰기

int main() {
    char s1[20] = "안녕하세요.";

    FILE *fp = fopen("hello.txt", "w"); // hello.txt 파일을 쓰기 모드로 열기

    fputs(s1, fp); // 서식을 지정하여 문자열을 파일에 저장

    fclose(fp); // 파일 포인터 닫기

    return 0;
}
