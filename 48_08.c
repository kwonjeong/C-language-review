#include <stdio.h>
// 48-8 심사문제 : 자동차 계기판 구조체 선언하기

struct Dashboard{
    int speed;
    char fuel;
    float mileage;
    int engineTemp;
    int rpm;
};

int main() {
    struct Dashboard p1;

    p1.speed = 80;
    p1.fuel = 'F';
    p1.mileage = 5821.442871;
    p1.engineTemp = 200;
    p1.rpm = 1830;

    printf("Speed : %dkm/h\n", p1.speed);
    printf("Fuel : %c\n", p1.fuel);
    printf("Mileage : %fkm\n", p1.mileage);
    printf("Engine temp : %dºC\n", p1.engineTemp);
    printf("RPM : %d\n", p1.rpm);

    return 0;
}
