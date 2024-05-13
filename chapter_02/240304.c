#include <stdio.h> //preprocessor

//any c code line that starts with # is a preprocessor.
//it runs before the code is compiled

int main() {
    printf("\"Hello\"\nSuman"); //printf is also a function, but takes a string argument and prints. it is defined in stdio.h, hence why we include stdio.h
    //"\n" puts a new line in code, it's called an escape code.
    //"\"" is also a escape character. it puts in normal quotation marks in text.
    return 0;  //associated with integer type function, indicates that program ended successfully
}

//when we hit build, it automatically compiles and runs the code.
