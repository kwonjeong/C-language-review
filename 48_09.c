#include <stdio.h>
// 심사문제 : 자동차 계기판 구조체 정의하기

typedef struct Dashboard{
    int speed;
    char fuel;
    float mileage;
    int engineTemp;
    int rpm;
} Dashboard;

int main() {
    Dashboard d1;

    d1.speed = 100;
    d1.fuel = 'F';
    d1.mileage = 158203.442871;
    d1.engineTemp = 200;
    d1.rpm = 1830;

    printf("Speed : %dkm/h\n", d1.speed);
    printf("Fuel : %c\n", d1.fuel);
    printf("Mileage : %fkm\n", d1.mileage);
    printf("Engine temp : %dºC\n", d1.engineTemp);
    printf("RPM : %d\n", d1.rpm);

    return 0;
}
