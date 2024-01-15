#include "main.h"

/**
 * _puts - print a string  function
 * @str: pointer to the string to string value
 * Return: void value
 */

void _puts(char *str)
{
	int i = 0;

	while (str[i])
	{
		_putchar(str[i]);
		i++;
	}
	_putchar('\n');
}
