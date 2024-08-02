#include <cs50.h>
#include <stdio.h>

int main(void)

{
    printf("Hello World!\\n");
    printf("Hello World!\n");
    string answer= get_string("Whats your name? ");
    printf("Hello, %s \n", answer);
    printf("Bye Bye");
}

//Run with : gcc -o hello hello.c -lcs50
