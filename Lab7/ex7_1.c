#include <stdio.h>

int main(void) {
    int arr1[10] = {0}, arr2[10] = {0};
    int i;
    printf("Please enter 10 numbers : ");
    for (i = 0; i < 10; i++) {
        scanf("%d", &arr1[i]);
    }
    int start, end;
    printf("Enter the starting and ending position ( 1 - 10 ) to copy : ");
    scanf("%d %d", &start, &end);
    for (i = 0; i < 10; i++) {
        arr2[i] = (i <= end - start ? arr1[start + i - 1] : 0);
        printf("%d ", arr2[i]);
    }
    printf("\n");
    return 0;
}