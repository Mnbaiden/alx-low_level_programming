#include "variadic_functions.h"

/**
 * print_numbers - a function that prints numbers, followed by a new line.
 * @n: number of integers to be passed
 * @separator: the string to be printd between numbers
 * Return: Alwasys 0.
 */
void print_numbers(const char *separator, const unsigned int n, ...)
{
	unsigned int i;
	va_list args;

	va_start(args, n);

	if (separator == NULL)
		separator = "";

	for (i = 0; i < n; i++)
	{
		printf("%d", va_arg(args, int));
		if (i < n - 1)
			printf("%s", separator);
	}
	printf("\n");
	va_end(args);
}
