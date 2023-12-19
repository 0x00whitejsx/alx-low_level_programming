#include <stdio.h>

/**
 * main  - Prints the size varoius type base on
 * the computer
 *Return: 0.
 */

int main(void)
{
	printf("Size of a char: %zu byte(s)\n", sizeof(char));
	printf("Size of an int: %zu byte(s)\n", sizeof(int));
	printf("Size of a long int: %zu bytes(s)\n", sizeof(long int));
	printf("Size of a long long int: %zu byte(s)\n", sieof(long long int));
	printf("Size o a float: %zu byte(s)", sizeof(float));

	return (0);
}
