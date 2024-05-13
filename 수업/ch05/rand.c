#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main(){
    int rand_num;
    srand(time(NULL));
    rand_num = 1 + rand() % 6;
    printf("%d", rand_num);
    return 0;
}