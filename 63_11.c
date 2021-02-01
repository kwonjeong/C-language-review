#include <stdio.h>
// 63-11 심사문제 : 문자열 매개변수 사용하기

char printFullName(char s1[], char s2[]){
    printf("%s%s\n", s1, s2);
}

int main() {
    char familyName[31];
    char givenName[31];

    scanf("%s %s", familyName, givenName);
    printFullName(familyName, givenName);

    return 0;
}
