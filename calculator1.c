// #include <cs50.h>
#include <stdio.h>
#include "cs50.h"
#include "cs50.c"
/*
int main(void){
    int x = get_int("x: ");
    int y = get_int("y: ");

    printf("%i\n", x + y);
}
*/

// let's do the same thing using function
int add (int a, int b);
int main(void){
    int x = get_int("x: ");
    int y = get_int("y: ");
    int z = add(x, y);   // using add() function here
    printf("%i\n", z);
}

int add(int a, int b){
    return a + b;
}
