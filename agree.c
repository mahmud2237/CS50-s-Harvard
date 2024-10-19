// #include <cs50.h>
#include <stdio.h>
#include "cs50.h"
#include "cs50.c"
int main(void){
    char c = get_char("Do You Agree? ");
    if (c == 'y' || c == 'Y'){
        printf("Agreed.\n");
    }
    else if (c == 'n' || c == 'N'){
        printf("Not Agreed.\n");
    }
    else{
        printf("Please enter Y, y for Agreed or N, n for Not Agreed");
    }
}
