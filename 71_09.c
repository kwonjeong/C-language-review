#include <stdio.h>
#include <stdlib.h>
#include <string.h>
// 71-9 심사문제 : 파일 크기만큼 파일 읽기

int getFileSize(FILE *fp){
    int size;
    int currPos = ftell(fp); // 파일 포인터의 현재 위치

    fseek(fp, 0, SEEK_END); // 파일 포인터 맨 끝으로 이동
    size = ftell(fp); // 파일 포인터의 크기

    fseek(fp, currPos, SEEK_SET); // 파일 포인터 위치를 현 위치로 다시 이동

    return size; // 포인터 크기 반환
}

char *getData(int offset, int size, int *count, FILE *fp){
    char *buffers = malloc(size + 1);

    fseek(fp, offset, SEEK_SET); // 파일 크기 처음으로 이동시킴
    *count = fread(buffers, sizeof(char), size, fp); // count값 저장하고 파일 읽기

    return buffers; // 읽은 문자열 반환
}

int main() {
    char *buffer;
    int size;
    int count; // 읽은 크기

    FILE *fp = fopen("words.txt", "r"); // 파일 읽기 형식으로 열기

    size = getFileSize(fp); // 포인터 크기
    buffer = getData(0, size, &count, fp);

    printf("%s\n", buffer);
    printf("%d\n", count);

    fclose(fp);
    free(buffer);

    return 0;
}
