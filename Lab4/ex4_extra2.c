#include <stdio.h>
#include <math.h>

float dist(float x1, float y1, float x2, float y2);

int main(void) {

    float x1, y1, x2, y2;
    printf("Enter the coordinates of the first point (x, y): ");
    scanf("%f %f", &x1, &y1);
    printf("Enter the coordinates of the second point (x, y): ");
    scanf("%f %f", &x2, &y2);

    printf("The distance between the two points is %f\n", dist(x1, y1, x2, y2));
    
    return 0;
}

float dist(float x1, float y1, float x2, float y2) {
    return sqrt(pow((x1 - x2), 2) + pow((y1 - y2), 2));
}
