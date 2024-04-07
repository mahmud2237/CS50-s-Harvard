#include <cs50.h>
#include <stdio.h>

// void meaw (void){
//     printf("meaw\n");
// }

void meaw (void);

int main(void){
    int n = get_int("Enter a Number: ");
    for(int i = 0; i < n; i++){
        meaw();   // define function before neither the code will not know the function called meaw()
    }
}
void meaw (void){
    printf("meaw\n");
}
