#include <stdio.h>

int main(void) {
    int arr[10] = {0};
    int i;
    int min, max;

    for (i = 0; i < 10; i++) {
        printf("Enter element %02d: ", i + 1);
        scanf("%d", &arr[i]);
        if (i == 0) { min = arr[i]; max = arr[i]; }
        if (arr[i] < min) { min = arr[i]; }
        if (arr[i] > max) { max = arr[i]; }
    }

    printf("\nMaximum element is :%d\nMinimum element is: %d\n", max, min);

    return 0;
}