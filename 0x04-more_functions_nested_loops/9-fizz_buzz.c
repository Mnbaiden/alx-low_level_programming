#include <stdio.h>

/**
 * main - func prints thenumbers from 1-00, but after multiples of three,
 *
 * Buzz, and for multiples of both three and five, FizzBuzz.
 *
 * Return: Always 0 (success).
 */
int main(void)
{
	int num;

	for (num = 1; num <= 100; num++)
	{
		if ((num % 3) == 0 && (num % 5) == 0)
			printf("FizzBuzz");

		else if ((num % 3) == 0)
			printf("Fizz");

		else if ((num % 5) == 0)
			printf("Buzz");

		else
			printf("%d", num);

		if (num == 100)
			continue;
		printf(" ");
	}

	printf("\n");

	return (0);
}
