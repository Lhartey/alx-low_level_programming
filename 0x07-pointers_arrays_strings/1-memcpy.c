#include "main.h"

/**
 * _memcpy - Copies @n bytes from the memory
 * @dest: A pointer to the memory
 * @src: The source buffer to copy characters
 * @n: The number of bytes to copy
 * Return: A pointer to the destination buffer @dest
 */
char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int a;

	for (a = 0; a < n; a++)
	{
		dest[a] = src[a]
	}

	return (dest);
}
