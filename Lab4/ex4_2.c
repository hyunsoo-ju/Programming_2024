#include <stdio.h>
#include <stdlib.h>

int main(void) {
    int size = 0;

    while (size <= 0 || size > 20) {
        printf("Enter the desired multiplication table (from 1 to 20): ");
        scanf("%d", &size);
        if (size == 999) {
            exit(0);
        }
    }

    int i, j, k;

    for (i = 1; i <= size; i+=3) {
        for (j = 1; j <= 9; j++) {
            for (k = i; k <= i + 2 && k <= size; k++) {
                printf("%d * %d = %d\t", k, j, k * j); 
            }
        printf("\n");
        }
        printf("\n");
    }

    return 0;
}