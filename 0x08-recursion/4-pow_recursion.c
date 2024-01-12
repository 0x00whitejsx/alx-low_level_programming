#include "main.h"

/**
 * _pow_recursion - raises x to the power of y
 * @x: Number Interger
 * @y: power
 *
 * Return: on succee1.
 * desc: on error, -1 is return and errno is set appropertetly.
 */
int _pow_recursion(int x, int y)
{
	if (y < 0)
		return (-1);
	if (y == 0)
		return (1);
	return (x * _pow_recursion(x, y - 1));
}
