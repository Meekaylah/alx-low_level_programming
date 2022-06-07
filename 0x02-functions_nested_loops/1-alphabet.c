#include <unistd.h>
#include "main.h"
/**
 * print_alphabet - function that prints alphabets in lowercase
 * you can oly use _putcahr twice in your code
 * Return:  0
 */

void print_alphabet(void)
{
	int x = 'a';

	while (x <= 'z')
	{
		_putchar(x);
		x += 1;
	}
	_putchar('\n');
}
