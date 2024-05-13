#include <stdio.h>

int main(void) {
    int arr[10] = {0};
    int i;
    int sum = 0;
    printf("Enter 10 Integers: \n");
    for (i = 0; i < 10; i++) {
        printf("arr[%d]: ", i);
        scanf("%d", &arr[i]);
        sum += arr[i];
    }

    printf("Sum of the array: %d\n", sum);

    return 0;
}