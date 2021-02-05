#include <stdio.h>
#include <stdlib.h>
#include <string.h>
// 71-11 심사문제 : 파일을 읽은 뒤 거꾸로 저장하기

int main() {
    char *buffer;
    int size;

    FILE *fp = fopen("words.txt", "r+"); // 파일 읽고쓰기

    fseek(fp, 0, SEEK_END);
    size = ftell(fp); // 포인터 크기

    buffer = malloc(size + 1); // NULL 고려
    memset(buffer, 0, size + 1); // buffer 0으로 초기화

    for (int i = 0; size >= i; i++){ // i가 size보다 작거나 같을 때
        fseek(fp, -i , SEEK_END); // 한 칸씩 뒤로 이동
        fread(buffer, sizeof(char), 1, fp); // 1바이트 만큼 읽음
        fwrite(buffer, strlen(buffer), 1, stdout); // 읽은 buffer 바로 출력
    }

    fclose(fp);
    free(buffer);

    return 0;
}
