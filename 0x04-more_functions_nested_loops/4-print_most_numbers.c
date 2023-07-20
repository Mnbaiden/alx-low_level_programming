#include "main.h"

/**
 * print_most_numbers - func checks for checks for a digit (through 9)
 *
 * Return: Always 0 (success).
 */
void print_most_numbers(void)
{
	int c;

	for (c = 48; c < 58; c++)
	{
		if (c != 50)
		{
			if (c != 52)
			{
				_putchar(c);
			}
		}
	}
	_putchar('\n');
}
