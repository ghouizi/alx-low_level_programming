#include <unistd.h>

/**
* main - Entry point
*
* Return: Always 1 (Success)
*/

int main(void)
{
	const char *str = "and that piece of art is useful\" - Dora Korpar, 2015-10-19\n";
	ssize_t len = sizeof(quote) - 1;

	write(2, quote, len);

	return (1);
}
