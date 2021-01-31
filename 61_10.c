#include <stdio.h>
#include <stdbool.h>
// 61-10 심사문제 : 게임 캐릭터 능력치 함수 만들기

float getArmor(){
    return 20.5;
}

bool hasSlowSkill(){
    return false;
}

int main() {
    float armor;
    bool slow;

    armor = getArmor();
    slow = hasSlowSkill();

    printf("%f\n", armor);
    printf("%s\n", slow == true ? "true" : "false");

    return 0;
}
