#include <stdio.h>

/**
 * main - Print alphbet without q and e.
 *
 * Return: Always 0.
 */
int main(void)
{
	char letterAlph;

	for (letterAlph = 'a'; letterAlph <= 'z'; letterAlph++)
	{
		if (letterAlph != 'e' && letterAlph != 'q')
			putchar(letterAlph);
	}
	putchar('\n');

	return (0);
}
