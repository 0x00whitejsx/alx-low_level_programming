#include <stdio.h>

/**
 * main - print letter in reverse order
 *
 * Return: Always 0.
 */
int main(void)
{
	char letter_rev;

	for (letter_rev = 'z'; letter_rev >= 'a'; letter_rev--)
		putchar(letter_rev);
	putchar('\n');
	return (0);
}
