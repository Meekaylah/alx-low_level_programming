#include "main.h"
/**
 * print_most_numbers - function that prints numbers 0 to 9
 * do not print 2 and 4
 * Return: nothing
 */
void print_most_numbers(void)
{
	int n = 0;

	while (n < 10)
	{
		if (n != 2 && n != 4)
			_putchar(n + '0');
		n += 1;
	}
	_putchar('\n');
}
