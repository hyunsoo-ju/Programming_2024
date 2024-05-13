#include <stdio.h>

int main() {

    int n;
    scanf("%d", &n);
    int score[1000];
    double newScore[1000];

    int i, max = 0;

    for (i = 0; i < n; i++) {
        scanf("%d", &score[i]);
        if (score[i] > max) {
            max = score[i];
        }
    }
    
    double sum = 0;

    for (i = 0; i < n; i++) {
        newScore[i] = (double) score[i] / max * 100;
        sum += newScore[i];
    }
    
    printf("%f", sum / n);
    
    return 0;

}