#include <stdio.h>
#include <stdlib.h>
#include <string.h>
// 70-9 심사문제 : 파일에서 문자열 읽기

int main() {
    char *buffer = malloc(100);
    memset(buffer, 0, 100); // buffer이 가리키는 메모리를 100바이트만큼 0으로 설정

    FILE *fp = fopen("words.txt", "r"); // 파일을 읽기 모드로 열기

    fread(buffer, sizeof(buffer), 100, fp); // buffer 크기 100이므로 100만큼 카운트

    printf("%s\n", buffer);

    fclose(fp);
    free(buffer);


    return 0;
}
