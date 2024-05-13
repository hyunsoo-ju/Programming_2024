#include <stdio.h>
#define WIDTH 5
#define HEIGHT 5
int main(void) {

    int arr[HEIGHT][WIDTH];
    int sum_row[HEIGHT] = {0};
    int sum_column[WIDTH] = {0};
    int i;

    for (i = 0; i < HEIGHT; i++) {
        printf("Enter row %d: ", i + 1);
        int j;
        for (j = 0; j < WIDTH; j++) {
            scanf("%d", &arr[i][j]);
            sum_row[i] += arr[i][j];
            sum_column[j] += arr[i][j];
        }
    }

    printf("\n");

    printf("Row totals   : ");
    for (i = 0; i < HEIGHT; i++) {
        printf("%d ", sum_row[i]);
    }
    printf("\n");

    printf("Column totals: ");
    for (i = 0; i < WIDTH; i++) {
        printf("%d ", sum_column[i]);
    }
    printf("\n");

    return 0;

}