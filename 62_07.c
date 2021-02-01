#include <stdio.h>
// 62-7 심사문제 : 게임 캐릭터 능력치 설정 함수 만들기

float setAttackSpeed(float a){
    printf("Attack Speed : %f\n", a);
}

int main() {
    setAttackSpeed(0.638f);
    setAttackSpeed(1.23f);
    return 0;
}
