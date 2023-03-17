#include <stdio.h>

int main(void)
{
    puts("Programming is like building a multilingual puzzle");
    return 0;
}
gcc -Wall -Werror -Wextra -pedantic -std=gnu89 4-puts.c && ./a.out
echo $?
