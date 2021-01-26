#include <stdio.h>
#include <string.h>
#include <stdbool.h>
// 47-5 심사문제 : 공백이 포함된 회문 판별

int main() {
    char text[30];
    int length;

    scanf("%[^\n]s", text);

    length = strlen(text);
    bool isPalindrome = true;

    int begin = 0;
    int end = length - 1;

    while (begin < end){
        while (text[begin] == " ")
            begin++;
        while (text[end] == " ")
            end--;
        if (begin > end || text[begin] != text[end]){
            isPalindrome = false;
            break;
        }
        begin++;
        end--;
    }
    printf("%d\n", isPalindrome);

    return 0;
}
