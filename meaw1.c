#include <cs50.h>
#include <stdio.h>

void meaw (int n);

int main (void){
    int n = get_int("Enter a number: ");
    meaw(n);
}
void meaw (int n){     // decline the meaw function before the starting line of the code
    for(int i = 0; i < n; i++)
    {
        printf("meaw\n");
    }
}
