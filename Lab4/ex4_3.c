#include <stdio.h>

int biggest(int n1, int n2, int n3, int n4);

int main(void) {
    int a, b, c, d;
    printf("Enter four integers: ");
    scanf("%d %d %d %d", &a, &b, &c, &d);
    printf("Biggest : %d", biggest(a, b, c, d));

    return 0;
}

int biggest(int n1, int n2, int n3, int n4) {

    int max = n1;

    if (max < n2) {
        max = n2;
    }
    if (max < n3) {
        max = n3;   
    }
    if (max < n4) {
        max = n4;
    }
    return max;
}