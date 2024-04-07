#include <cs50.h>
#include <stdio.h>
int main(void){
    string answer = get_string("What's your name? ");  // compilar didn't understand get_string so include the CS50
    printf("Hello, %s\n", answer);
}
