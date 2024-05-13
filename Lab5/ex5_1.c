#include <stdio.h>
#include <math.h>

int main(void) {
    printf("Program to find the root of the function exp(-x)-x using the Newton - Raphson Method.\n");
    double x_new, x_old, acc;
    printf("Enter the accuracy(acc): ");
    scanf("%lf", &acc);
    x_new = -10;

    int counter = 0;
    do {
        x_old = x_new;
        x_new = x_old - (exp(-x_old) - x_old) / (-exp(-x_old) - 1);
        printf("iteration :%3d => x_old : %15.10f\tx_new : %15.10f\n", counter, x_old, x_new);
        counter++;
    }
    while (fabs(x_new - x_old) >= acc);
    counter--;

    printf("The root of the function exp(-x)-x at accuracy %.6f is %.6f\n", acc, x_new);
    printf("The number of iterations is %d\n", counter);
}