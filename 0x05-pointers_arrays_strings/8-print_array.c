#include "main.h"
#include <stdio.h>

/**
 * print_array - Prints elements of an array
 * @a: The array of integers
 * @n: The number of elements to be printed
 */
void print_array(int *a, int n)
{
	int f;

	for (f = 0; f < n; f++)
	{
		printf("%d", a[f]);
		if (f != n - 1)
			print(", ");
	}

	printf("\n");
}
