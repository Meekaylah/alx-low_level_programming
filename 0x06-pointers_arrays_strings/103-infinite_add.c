#include "main.h"

/**
 * infinite_add - adds two numbers
 * @n1: Pointer to the first character of number 1
 * @n2: Pointer to the first character of number 2
 * @r: Buffer where to write the result
 * @size_r: Buffer size
 *
 * Return: Pointer to the result of the string
 */
char *infinite_add(char *n1, char *n2, char *r, int size_r)
{
	int len1 = 0, len2 = 0;
	int add = 0;
	int i = size_r - 2;

	while (n1[len1 + 1] != 0)
		len1++;
	while (n2[len2 + 1] != 0)
		len2++;
	r[size_r - 1] = 0;

	while (i >= 0 && (len1 >= 0 || len2 >= 0))
	{
		add += (len1 < 0 ? '0' : n1[len1]) + (len2 < 0 ? '0' : n2[len2]);
		add -= 2 * '0';
		r[i] = add % 10 + '0';
		add /= 10;
		i--;
		len1--;
		len2--;
	}
	if ((i < len1 || i < len2) || (i < 0 && add))
		return (0);
	add ? r[i] = add + '0' : 1;
	i += add ? 0 : 1;

	return (r + i);
}
