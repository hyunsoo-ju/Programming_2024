#include <stdio.h>

int main(void) {
    
    int x, y;
    int a, b, c, d, e;
    printf("Please enter your identification number: ");
    scanf("%d", &x);
    
    a = x / 10000;
    b = (x % 10000) / 1000;
    c = (x % 1000) / 100;
    d = (x % 100) / 10;
    e = x % 10;

    y = 10 * x + ((a + b + c + d + e) % 10);

    printf("The identification number with digit : %d\n", y);

    return 0;

}