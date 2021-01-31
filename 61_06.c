#include <stdio.h>
#include <stdbool.h>
// 61-6 연습문제 : 게임 캐릭터 능력치 함수 만들기

int getMana(){
    return 222;
}

float getAttackSpeed(){
    return 0.679;
}

int isMelee(){
    return true;
}

int main() {
    int mana;
    float attackSpeed;
    bool melee;

    mana = getMana();
    attackSpeed = getAttackSpeed();
    melee = isMelee();

    printf("%d\n", mana);
    printf("%f\n", attackSpeed);
    printf("%d\n", melee);

    return 0;
}
