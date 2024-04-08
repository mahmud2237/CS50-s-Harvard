#include <cs50.h>
#include <stdio.h>

/*
int main(void){
    // const int n = get_int("Enter the size: ");
    int n = get_int("Enter the size: ");
    while (n < 1){
        n = get_int("Please enter the valid size: ");    // Prompt user for positive integer
    }
    // Print an n-by-n grid of bricks
    for (int i = 0; i < n; i++){
        for (int j = 0; j< n; j++){
            printf("#");
        }
        printf("\n");
    }
}
*/

// same thing using the do-while loop
int main(void){
    int n;
    do{
        n = get_int("Enter size: ");  // Prompt user for positive integer
    }
    while (n < 1);

// Print an n-by-n grid of bricks
    for (int i = 0; i < n; i++){
        for (int j = 0; j < n; j++){
            printf("#");
        }
        printf("\n");
    }
}
