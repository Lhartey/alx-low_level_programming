#include "main.h"

/**
 * _memset - Fills the first n bytes of the memory area
 * @s: A pointer
 * @b: The character to fill the memory area
 * @n: The number of bytes
 * Return: A pointer to the filled memory
 */
char *_memset(char *s, char b, unsigned int n)
{
	unsigned int a;

	for (a = 0; a < n; a++)
	{
		s[a] = b;
	}

	return (s);
}
