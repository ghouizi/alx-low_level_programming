#include <unistd.h>

int main(void)
{
    const char quote[] = "and that piece of art is useful\" - Dora Korpar, 2015-10-19\n";
    ssize_t len = sizeof(quote) - 1;

    write(2, quote, len);

    return (1);
}
