#include <stdio.h>
#include <stdlib.h>
#include <limits.h>

int main() {
    int *numPtr1 = malloc(sizeof(4));
    int *numPtr2 = malloc(sizeof(16));

    *numPtr1 = INT_MAX;
    *numPtr2 = LLONG_MAX;

    printf("%d %lld\n", *numPtr1, *numPtr2);

    free(numPtr1);
    free(numPtr2);

    return 0;
}
