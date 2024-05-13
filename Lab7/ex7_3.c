#include <stdio.h>
#define SIZE 10

int max( int arr[], int n );
double average( int arr[], int n );
void copy( int arr[], int new_arr[], int n );

int main(void) {

    int arr[SIZE];
    int new_arr[SIZE];
    int i, max_value;
    double avg_value;

    printf("Enter %d integers: ", SIZE);
    for (i = 0; i < SIZE; i++) {
        scanf("%d", &arr[i]);
    }

    max_value = max(arr, SIZE);
    avg_value = average(arr, SIZE);
    copy(arr, new_arr, SIZE);

    printf("maximum value: %d\n", max_value);
    printf("average: %f\n", avg_value);
    printf("copied array: ");
    for (i = 0; i < SIZE; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");

    return 0;

}

int max( int arr[], int n ) {
    int i, max = arr[0];
    for (i = 0; i < n; i++) {
        if (arr[i] > max) {
            max = arr[i];
        }
    }
    return max;
}

double average( int arr[], int n ) {
    int i, sum = 0;
    for (i = 0; i < n; i++) {
        sum += arr[i];
    }
    return (double) sum / n;
}

void copy( int arr[], int new_arr[], int n ) {
    int i;
    for (i = 0; i < n; i++) {
        new_arr[i] = arr[i];
    }
}