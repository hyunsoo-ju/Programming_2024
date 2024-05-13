#include <stdio.h>

int integerPower( int a, int b );

int main(void) {
    int base, exp;
    printf("Enter integer base and exponent: ");
    scanf("%d %d", &base, &exp);

    printf("%d to the power %d is: %d\n", base, exp, integerPower(base, exp));

    return 0;
}

int integerPower( int a, int b) {
    int i;
    int pow = 1;
    
    for ( i = 1; i <= b; i++ ) {
        pow *= a;
    }

    return pow;
}