#include <unistd.h>
#include "main.h"
/**
 * print_alphabet_x10 - function that prints 10 times the alphabets,
 * in lowercase
 * Returns: (0)
 */
void print_alphabet_x10(void)
{
	int lw;
	int n = 0;

	while (n < 10)
	{
		lw = 'a';
		while (lw <= 'z')
		{
			_putchar(lw);
			lw += 1;
		}
		_putchar('\n');
		n += 1;
	}
}
