#include "main.h"

/**
 * memset - Fills the first n bytes of the memory area
 *  @s: A pointer
 *  @b: The character to fill the memory area
 *  @n: The number of bytes
 *  Return: A pointer to the filled memory
 */
char *_memset(char *s, char b, unsigned int n)
{
	unsigned int index;
	unsigned char *memory = s, value = b;

	for (index = 0; index < n; index++)
		memory[index] = value;

	return (memory);
}
