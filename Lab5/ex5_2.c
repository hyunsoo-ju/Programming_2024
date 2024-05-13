#include <stdio.h>

int euclid_gcd(int a, int b);

int main(void) {
    int a, b;
    printf("Enter two integers: ");
    scanf("%d %d", &a, &b);

    printf("Greatest common divisor: %d", euclid_gcd(a, b));

    return 0;
}

int euclid_gcd(int a, int b) {
    int m = (a >= b ? a : b);
    int n = (a >= b ? b : a);

    do {
        int r = m % n;
        m = n;
        n = r;
    }
    while ( n != 0 );

    return m;
}