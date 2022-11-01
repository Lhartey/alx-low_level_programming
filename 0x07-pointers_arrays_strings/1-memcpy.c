#include "main.h"

/**
 * _memcpy - Copies @n bytes from the memory
 * @dest: A pointer to the memory
 * @src: The source buffer to copy characters
 * @n: The number of bytes to copy
 * Return: A pointer to the destination buffer @dest
 */
void *_memcpy(void *dest, const void *src, size_t n)
{
	unsigned int index;
	unsigned char *destination = dest;
	const unsigned char *source = src;

	for (index = 0; index < n; index++)
		destination[index] = source[index];

	return (dest);
}
