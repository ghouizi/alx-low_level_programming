#include "main.h"
#include <stdio.h>

/**
 * _isupper - checks if a character is uppercase.
 * @c: the character to check.
 *
 * Return: 1 if c is uppercase, 0 otherwise.
 */
int _isupper(int c)
{
	return (c >= 'A' && c <= 'Z' ? 1 : 0);
}

/**
 * main - tests the _isupper function.
 *
 * Return: Always 0.
 */
int main(void)
{
	char c;

	c = 'A';
		printf("%c: %d\n", c, _isupper(c));
	c = 'a';
		printf("%c: %d\n", c, _isupper(c));
	return (0);
}
