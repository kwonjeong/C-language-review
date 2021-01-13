#include <stdio.h>

int main() {
    char n;

    scanf("%c", &n);

    printf("%s\n", n != 'k' ? "참" : "거짓");
    printf("%s\n", n > 'h' ? "참" : "거짓");
    printf("%s\n", n <= 'o' ? "참" : "거짓");

    return 0;
}
