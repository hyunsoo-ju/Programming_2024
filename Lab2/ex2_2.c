#include <stdio.h>

int main(void) {
    int H, W, N;
    printf("Enter H, W and N : ");
    scanf("%d %d %d", &H, &W, &N);
    int room;
    if (N <= H * W) {
        room = 100 * (((N - 1) % H) + 1) + (((N - 1) / H) + 1);
        printf("N : %d ---------> Student's room number : %d\n", N, room);
    } else {
        printf("N : %d ---------> Student cannot be assigned a room\n", N);
    }
}