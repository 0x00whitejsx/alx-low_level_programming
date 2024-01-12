#include "main.h"

/**
 * factorial - get the factorial fo n
 * @n: interger
 *
 * Return: on success 1.
 * on error, -1 return, and set appropertely
 */
int factorial(int n)
{
	if (n < 0)
		return (-1);
	if (n == 0)
		return (1);
	return (n * factorial(n - 1));
}
