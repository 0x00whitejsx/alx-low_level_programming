#include <stdio.h>

/**
 * main - Print a to z
 *
 * Return: Always 0.
 */
int main(void)
{
	char letterAlph;

	for (letterAlph = 'a'; letterAlph <= 'z'; letterAlph++)
		putchar(letterAlph);
	putchar('\n');
	return (0);
}
