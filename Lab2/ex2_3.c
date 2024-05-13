#include <stdio.h>

int main(void) {

    float x, y;
    printf("Enter the value of x: ");
    scanf("%f", &x);
    
    if (x <= 0) {
        y = x * x - 9 * x + 2;
    } else {
        y = 7 * x + 2;
    }

    printf("The value of f(x) is %.6f\n", y);
    
    return 0;

}