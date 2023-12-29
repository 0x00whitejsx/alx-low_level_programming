#include <stdio.h>

/**
 * main - print leeter from a to z
 *
 * Return: Alway 0 (success)
 */
int main(void)
{
	char letterAlp;

	for (letterAlp = 'a'; letterAlp <= 'z'; letterAlp++)
		putchar(letterAlp);
	putchar('\n');
	return (0);
}
