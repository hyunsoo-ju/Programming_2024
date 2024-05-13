#include <stdio.h>

int MulDigits(int n);

int main(void) {
    int n = 1;
    while (n <= 100 || n >= 999) {
        printf("Enter an integer between 100 and 999 : ");
        scanf("%d", &n);
    }

    printf("The multiplication of all digits in %d is %d\n", n, MulDigits(n));
    
    return 0;
}

int MulDigits(int n) {
    int div = n;
    int digits = 1;

    while (div != div % 10) {
        div = div / 10;
        digits++;
    }
    printf("Digits: %d\n", digits);

    div = n;
    int i;
    int pow = 1;
    int mul = 1;

    while (div != div % 10) {
        pow = 1;
        for (i = 1; i <= digits - 1; i++) {pow *= 10;}
        mul *= (div / pow);
        div = div % pow;
        printf("%d, %d\n", mul, div);
        digits--;
    }

    mul *= div;

    return mul;
}