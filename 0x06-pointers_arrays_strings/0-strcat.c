#include "main.h"
/**
 * _strcat - concatenates two strings
 * @dest: input value
 * @src: input value
 *
 * Return: void
 */
char *_strcat(char *dest, char *src)
{
	int i, j;
	i = j = 0;

	// Find the end of the destination string
	while (dest[i] != '\0');
	i++;

	// Concatenate the source string to the destination string

	while (src[j] != '\0') 
	{
		dest[i] = src[j];
		i++;
		j++;
	}

	// Add a null terminator to the end of the concatenated string
	dest[i] = '\0';

	return dest;
}
