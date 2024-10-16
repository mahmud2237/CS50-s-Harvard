// #include <cs50.h>
#include <stdio.h>
#include "cs50.h"
#include "cs50.c"
int main(void){
    char c = get_char("Do you agree? ");

    if (c == 'y' || c == 'Y'){
        printf("Agreed.\n");
    }
    else if (c == 'n' || c == 'N'){
        printf("Not Agreed.\n");
    }
    else{
        printf("Please enter Yes for Y, y or No for N, n");
    }
}
