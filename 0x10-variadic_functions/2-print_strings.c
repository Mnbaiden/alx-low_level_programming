#include "variadic_functions.h"

/**
 * print_strings - a function that prints strings, followed by a new line
 * @separator: the string to be printed between the strings
 * @n: the number of strings passed to the function
 * Return: Always 0
 */

void print_strings(const char *separator, const unsigned int n, ...)
{
	char *str;
	unsigned int i;
	va_list arg;

	va_start(arg, n);
	if (separator == NULL)
		separator = "";

	for (i = 0; i < n; i++)
	{
		str = va_arg(arg, char*);
		if (str == NULL)
			str = "(nil)";
		printf("%s", str);
		if (i < n - 1)
			printf("%s", separator);
	}
	printf("\n");
	va_end(arg);
}
