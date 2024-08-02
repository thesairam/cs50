#include <cs50.h>
#include <stdio.h>

int main(void)

{
    int counter=3;
    while (counter >0)
    {
        printf("meow1\n");
        counter--;
    }

    int i=0;
    while (i<=2)
    {
        printf("meow2\n");
        i++;
    }

    for (i=0; i<3; i++)
    {
        printf("meow3\n");
    }
}