#include "main.h"
/**
 * _abs - function that computes the ansolute value of an integer.
 * @x: The input number to check
 * Return: int.
 */
int _abs(int x)
{
	if (x < 0)
	{
		x = x * (-1);
		return (x);
	}
	else
		return (x);
}
