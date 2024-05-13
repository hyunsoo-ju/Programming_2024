#include <stdio.h>

int main(void) {
    int y, m, d;
    printf("Enter date: ");
    scanf("%d/%d/%d", &m, &d, &y);
    printf("New form of date: %02d-%02d-%02d\n", y, m, d);

    return 0;
}