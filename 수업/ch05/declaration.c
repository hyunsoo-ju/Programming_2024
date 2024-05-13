#include <stdio.h>

float square(double y)
{
    return y * y;
}

int main()
{
    int x;
    printf("%f\n%f\n", square(2.5), 5.0 / 2 + 2.5);

    // printf("%d\n%d\n", square(2.5), 5.0 / 2 + 2.5);

    printf("%d\n%d\n", x = square(2.5), x = 5.0 / 2 + 2.5);
}