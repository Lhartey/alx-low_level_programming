#include <main.h>

/**
 * more_numbers - prints 0 to 14 ten times
 * Return: Always 0
 */
void more_numbers(void)
{
	int num, count;

	for (num = 1; num <= 10; num++)
	{
		for (count = 0; count <= 14; count++)
		{
			if (count >= 10)
				_putchar('1');
			_putchar(count % 10 + '0');
		}

		_putchar('\n');
	}
}
