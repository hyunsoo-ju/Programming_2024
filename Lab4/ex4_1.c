#include <stdio.h>

int main(void) {
    int i, j, size;

    printf("Enter an odd number for the diamond size ( 1-19 ):");
    scanf("%d", &size);
    
    int half = size / 2;

    if (size % 2 == 0) {
        printf("Enter an odd number!");
    }
    else {
        for (i = 1; i <= size; i += 1) {
            for (j = 1; j <= size; j += 1) {
                if ((i >= -j + (half + 2)) && (i >= j - half) && (i <= -j + size + half + 1) && (i <= j + half)) {
                    printf("*");
                }
                else {
                    printf(" ");
                }
            }
            printf("\n");
        }
    }
    
    return 0;
}