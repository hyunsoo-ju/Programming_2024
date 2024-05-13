#include <stdio.h>

int main(void) {
    int arr[10] = {0};
    int size = 0;
    
    int i;
    printf("Enter 10 integers: ");
    for (i = 0; i < 10; i++) {
        int j;
        int dup = 0;
        int d;
        scanf("%d", &d);

        for (j = 0; j < size; j++) {
            if (d == arr[j]) {
                dup = 1;
                break;
            }
        }

        if (!dup) {
            arr[size++] = d;
        }
    }

    printf("Array after removing duplicates: ");

    for (i = 0; i < size; i++) {
        printf("%d ", arr[i]);
    }

    printf("\n");

    return 0;   
}