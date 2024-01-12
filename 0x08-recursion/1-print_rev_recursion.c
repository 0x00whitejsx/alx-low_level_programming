#include "main.h"

/**
 * _print_rev_recursion - Print string in reverse order
 * @s: string
 *
 * Return: on succeess 1
 * ON error, -1 is return
*/
void _print_rev_recursion(char *s)
{
	if (*s != '\0')
	{
		_print_rev_recursion(s + 1);
		_putchar(*s);
	}
}
