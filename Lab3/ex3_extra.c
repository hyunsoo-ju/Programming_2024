#include <stdio.h>

int main(void) {
    int donut;
    printf("Enter the number of donut: ");
    scanf("%d", &donut);

    int largeBox, mediumBox, smallBox, individualDonut, donutRemainder;

    largeBox = donut / 40;
    donutRemainder = donut % 40;
    mediumBox = donutRemainder / 20;
    donutRemainder = donutRemainder % 20;
    smallBox = donutRemainder / 10;
    donutRemainder = donutRemainder % 10;
    individualDonut = donutRemainder;

    printf("\n%d large box, %d medium box, %d small box, %d individual donut\n", largeBox, mediumBox, smallBox, individualDonut);
    printf("Total price = %d KRW\n", 16000 * largeBox + 8500 * mediumBox + 4500 * smallBox + 500 * individualDonut);
}