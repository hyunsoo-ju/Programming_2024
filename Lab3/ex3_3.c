#include <stdio.h>

int main(void) {
    int N;
    printf("Input the number: ");
    scanf("%d", &N);

    printf("\nA\tA+2\tA+4\tA+6\n");

    int A = 3;
    while (A <= N) {
        printf("%d\t%d\t%d\t%d\n", A, A + 2, A + 4, A + 6);
        A += 3;
    }

    return 0;
}