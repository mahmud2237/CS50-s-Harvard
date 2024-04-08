#include <cs50.h>
#include <stdio.h>
/*
int main(void){
    string name = get_string("What is your name? : ");
    printf("Hello, %s\n", name);
}
*/
int main(void){
    string first_name = get_string("What is your first name? : ");
    string last_name = get_string("What is your last name? : ");
    printf("Hello, %s %s\n", first_name, last_name);
    int age = get_int("What is your age? : ");
    printf("Hey %s %s, Your age is: %i\n", first_name, last_name, age);
    string number = get_string("Enter your Phone Number: ");
    printf("So, %s,\nis that  your personal phone number?\n", number);
}
