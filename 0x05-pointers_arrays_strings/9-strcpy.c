#include "main.h"

/**
 * _strcpy - Copies a string pointed to by @src
 *  @dest: A buffer to copy the string to
 *  @src: The source string to copy
 *  Return: string
 */
char *_strcpy(char *dest, const char *src)
{
	int index = 0;

	while (*(src + index) != '\0')
	{
		*(dest + index) = *(src + index);
		index++;
	}

	*(dest + index) = '\0';
	return (dest);
}
