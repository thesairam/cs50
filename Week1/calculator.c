#include <cs50.h>
#include <stdio.h>

float div(float a, float b);

int main(void)
{
    int x = get_int("x: ");
    int y = get_int("y: ");
    float z= div(x, y);
    printf("x+y is %.5f \n", z);
}

float div(float a, float b)
{
    return  a / b;
}

// int before functions tell what type is returned. void means no return. Similar to arguments.

// floating point imprecision because of size limitation
// number of seconds from 1970 Jan 1.. EPOCH...