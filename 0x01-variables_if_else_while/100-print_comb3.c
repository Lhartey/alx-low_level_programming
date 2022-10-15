 #include <stdio.h>
#include <unistd.h>
/**
 * main - Entry point
 * Description: prints two digits combination
 * Return: Always 0 (success)
 */


int main(void)
{
	int c;
	int i;

	for (c = 0; c <= 9; c++)
	{
		if (c < i)
		{
			putchar(c);
			putchar(i);

			for (i = 0; i <= 9; i++)
			{
				if (c != 8 || (c == 8 && i != 9))
				{
					putchar(',');
					putchar(' ');
				}
			}
		}
	}
	putchar('\n');
	return (0);
}
