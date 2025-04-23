#include <stdio.h>
#include <stdlib.h>

typedef long int myint_t;

int main(int argv, char **argc)
{
    myint_t myInt = 5;
    char *program = argc[0];
    printf("%x\n", program[0]);
    return 0;
}
