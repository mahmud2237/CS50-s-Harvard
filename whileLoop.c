// #include <cs50.h>
#include <stdio.h>
#include "cs50.h"
#include "cs50.c"
int main(void){
    int i = get_int("Enter a number: ");
    while (i > 0)
    {
        printf("Meaw\n");
        i--;   // i = i - 1  or, i -= 1
    }

}
