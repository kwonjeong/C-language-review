#include <stdio.h>
#include <stdint.h>

int main() {
    int8_t num1 = INT8_MIN;
    uint16_t num2 = UINT16_MAX;
    int32_t num3 = 0;
    int64_t num4 = INT64_MAX;

    printf("%d %u %d %lld\n", num1, num2, num3, num4);

    return 0;
}
