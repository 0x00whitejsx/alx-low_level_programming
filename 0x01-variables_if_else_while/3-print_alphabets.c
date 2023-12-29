#include <stdio.h>

/**
 * main - return letter both in uppercase and lower case
 *
 * Return: alway 0 (success)
 */

int main(void)
{
	char let;

	for (let = 'a'; let <= 'z'; let++)
		putchar(let);
	for (let = 'A'; let <= 'Z'; let++)
		putchar(let);
	putchar('\n');
	return (0);
}
