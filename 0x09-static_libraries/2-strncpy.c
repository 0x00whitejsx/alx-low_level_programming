#include "main.h"

/**
 * _strncpy - function that copie a string
 * @dest: destion of the string value
 * @src: source of return value
 * @n: amount of bytes from the source
 * Return: success pointer to destionation
 */

char *_strncpy(char *dest, char *src, int n)
{
	int i;

	for (i = 0; i < n && src[i] != '\0'; i++)
		dest[i] = src[i];
	for ( ; i < n; i++)
		dest[i] = '\0';
	return (dest);
}
