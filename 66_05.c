#include <stdio.h>
#include <stdarg.h>
#include <stdlib.h>
// 66-5 연습문제 : 자료형이 다른 가변 인자의 합 구하기

long long getSum(char *types, ...){
    va_list ap; //가변 인자 목록. 가변 인자의 메모리 주소를 저장하는 포인터
    int i = 0;
    long long result = 0;

    va_start(ap, types); // 가변 인자를 가져올 수 있도록 포인터 설정
    while(types[i] != '\0')
    {
        switch(types[i]){ // 맨 처음에 입력받은 type
            case 's':
                result += atoi(va_arg(ap, char *)); // 문자열을 정수로 바꿔 result에 저장 char *만큼 이동
                break;
            case 'i':
                result += va_arg(ap, int); // 정수이므로 result에 저장하고 int 만큼 이동 (4바이트)
                break;
            default:
                break;
        }
        i++;
    }
    va_end(ap);

    return result;
}

int main() {
    printf("%lld\n", getSum("siis", "12", 30000, 500000, "300"));
    printf("%lld\n", getSum("ssi", "150", "150", 100));

    return 0;
}
