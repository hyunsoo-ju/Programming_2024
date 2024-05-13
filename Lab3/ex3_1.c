#include <stdio.h>

int main(void) {
    int n;

    printf("Enter an integer: ");
    scanf("%d", &n);

    printf("The prime factors of %d are ", n);

    int i = n;
    int j;

    while (i > 1) {
        j = 2; //reinitialize j
        while (j <= i) { //factors will be smaller than i
            if (i % j == 0) { //if j is a factor of i
                printf("%d ", j); //prints the divisible factor
                i = i / j; //next loop starts from the divided i
                continue;
            }
            j++; //checks for next j
        } //note that naturally, the printed factors must be prime
    }

    printf("\n"); //newline
    
    return 0;
}