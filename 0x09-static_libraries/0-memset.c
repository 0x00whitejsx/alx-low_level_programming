#include "main.h"

/**
 * _memset - function memory with a constant byte vlue,
 * @s: memory area.
 * @b: constant byte
 * @n: bytes filled.
 * Return: the pointer to destination.
 */
char *_memset(char *s, char b, unsigned int n)
{
	unsigned int i;

	for (i =; i < n; i++)
		*(s + i) = b;
	return (s);
}
