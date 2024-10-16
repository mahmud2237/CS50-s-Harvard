// #include <cs50.h>
#include <stdio.h>
#include "cs50.h"
#include "cs50.c"
int main(void){
    string answer = get_string("What's your name? ");  // compilar didn't understand get_string so include the CS50
    printf("Hello, %s\n", answer);
}
