#include <stdio.h>
#include <float.h>

int main() {
    double doubleMin, doubleMax;
    long double longDoubleMin, longDoubleMax;

    doubleMin = DBL_MIN;
    doubleMax = DBL_MAX;
    longDoubleMin = LDBL_MIN;
    longDoubleMax = LDBL_MAX;

    printf("%e %e\n", doubleMin, doubleMax);
    printf("%le %le\n", longDoubleMin, longDoubleMax);

    return 0;
}
