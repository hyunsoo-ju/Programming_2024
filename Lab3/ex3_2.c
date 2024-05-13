#include <stdio.h>

int main(void) {

    char ch; //initialize char
    int countA = 0, countE = 0, countI = 0, countO = 0, countU = 0; //initialize vowel counters

    printf("Enter a sentence: ");

    while ((ch = getchar()) != '\n') {
        switch (ch) {
            case 'a':
            case 'A':
                countA++;
                break;
            case 'e':
            case 'E':
                countE++;
                break;
            case 'i':
            case 'I':
                countI++;
                break;
            case 'o':
            case 'O':
                countO++;
                break;
            case 'u':
            case 'U':
                countU++;
                break;
            default:
                break;
        }
    }

    printf("The number of \'a\' or \'A\' is %d,\n", countA);
    printf("The number of \'e\' or \'E\' is %d,\n", countE);
    printf("The number of \'i\' or \'I\' is %d,\n", countI);
    printf("The number of \'o\' or \'O\' is %d,\n", countO);
    printf("The number of \'u\' or \'U\' is %d,\n", countU);

    return 0;
}