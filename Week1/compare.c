#include <cs50.h>
#include <stdio.h>

int main(void)
{
    int x = get_int("What is x? ");
    int y = get_int("What is y? ");

    if(x<y)
    {
        printf("x is less than y\n");
    }

    else if(x>y)
    {
        printf("x is greater than y\n");
    }

    else
    {
        printf("x is equal to y\n");
    }
}

// can do the same without ELSE. 
//But adding ELSE skips the questions! if you do not add , it goes to all 3 questions everytime for all case!
