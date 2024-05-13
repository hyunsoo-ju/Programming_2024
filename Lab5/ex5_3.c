#include <stdio.h>

int gcd_r(int a, int b);

int main(void) {
    int a, b;
    printf("Enter two integers: ");
    scanf("%d %d", &a, &b);

    printf("Greatest common divisor: %d", gcd_r(a, b));

    return 0;
}

int gcd_r(int a, int b) {
    if (b == 0) {
        return a;
    }
    else {
        int m = (a >= b ? a : b);
        int n = (a >= b ? b : a);
        int r = m % n;
        m = n;
        n = r;
        return gcd_r(m, n);
    }
}