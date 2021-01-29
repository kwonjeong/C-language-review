#include <stdio.h>
// 57-9 심사문제 : 게임 캐릭터 스킬 처리하기

enum MasterYiSkill{
    AlphaStrike = 1,
    Meditation,
    WujuStyle,
    Highlander
};

int main() {
    enum MasterYiSkill skill;
    skill = Meditation;

    switch (skill)
    {
        case AlphaStrike:
            printf("일격 필살\n");
            break;
        case Meditation:
            printf("명상\n");
            break;
        case WujuStyle:
            printf("우주류 검술\n");
            break;
        case Highlander:
            printf("최후의 전사\n");
            break;
        default:
            break;
    }
    return 0;
}
