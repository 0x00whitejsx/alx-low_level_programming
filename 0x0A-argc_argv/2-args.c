#include "main.h"
#include <stdio.h>

/**
* main - function the print the argument pass into the main
* @argc: number of command line argument
* @argv: Array names
* Return: succesfull
*/
int main(int argc, char *argv[])
{
	int i;

	for (i = 0; i < argc; i++)
		printf("%s\n", argv[i]);
	return (0);
}
