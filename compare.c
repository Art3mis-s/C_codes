#include <stdio.h>
#include <cs50.h>

int main(void)
{
    int x = get_int("Was ist x? ");
    int y = get_int("Was ist y? ");

    if (x < y)
    {
        printf("x ist kleiner als y\n");
    }
    else (x > y)
    {
        printf("x ist größer als y\n");
    }
}