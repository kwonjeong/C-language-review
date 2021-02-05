#include <stdio.h>

int main() {
    char name[31];
    int order;

    scanf("%s %d", name, &order);

    FILE *fp = stdout;

    fprintf(fp, "The 4th Satellite of Jupiter : %s %d", name, order);

    fclose(fp);

    return 0;
}
