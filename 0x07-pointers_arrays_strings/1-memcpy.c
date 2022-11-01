#include "main.h"

/**
 * _memcpy - Copies @n bytes from the memory
 * @dest: A pointer to the memory
 * @src: The source buffer to copy characters
 * @n: The number of bytes to copy
 * Return: A pointer to the destination buffer @dest
 */
void *_memcpy(char *dest, char *src, unsigned int n)
{
	char *ptr = dest;

	while (n-- > 0)
	{
		*dest = *src;
		dest++;
		src++
	}

	return (dest);
}
