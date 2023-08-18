#include "variadic_functions.h"

/**
 * print_all - function that prints anything
 * @format: list of types of arguments passed to the function
 * Return: void
 */

void print_all(const char * const format, ...)
{
	int i;
	int b;
	char *str;
	va_list a_list;

	va_start(a_list, format);
	i = 0;
	while (format != NULL && format[i] != '\0')
	{
		switch (format[i])
		{
			case 'c':
				printf("%c", va_arg(a_list, int));
				b = 0;
				break;
			case 'i':
				printf("%i", va_arg(a_list, int));
				b = 0;
				break;
			case 'f':
				printf("%f", va_arg(a_list, double));
				b = 0;
				break;
			case 's':
				str = va_arg(a_list, char*);
				if (str == NULL)
					str = "(nil)";
				printf("%s", str);
				b = 0;
				break;
			default:
				b = 1;
				break;
		}
		if (format[i + 1] != '\0' && b == 0)
			printf(", ");
		i++;
	}
	printf("\n");
	va_end(a_list);
}
