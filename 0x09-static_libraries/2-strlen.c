#include "main.h"

/**
 * _strlen - function for string lenght
 * @s: value input
 * Return: success lenght of string
 */
int _strlen(char *s)
{
	int count = 0;

	while (*(s + count) != '\0')
		count++;
	return (count);
}
