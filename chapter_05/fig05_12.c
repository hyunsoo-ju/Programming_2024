
#include <stdio.h>
#include <math.h>
int main() {
    int value = 1;
    if (value < -1 || value > 1)
        printf("%s", "error\n");
    else
        if (value < 0)
            printf("%s", "low\n");
        else
            if (value > 0)
                printf("%s", "high\n");
            else
                printf("%s", "on\n");

    if (value < -1 || value > 1)
        printf("%s", "error\n");
    if (value >= -1 && value < 0)
        printf("%s", "low\n");
    if (value >= 0 && value <= 0)
        printf("%s", "on\n");
    if (value > 0 && value <= 1)
        printf("%s", "high\n");


}


