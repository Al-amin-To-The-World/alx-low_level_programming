#include "main.h"

/**
 * puts_half - prints half of a string.
 * @str: input string.
 * Return: no return.
 */
void puts_half(char *str)
{
	int i = 0;
	int z;

	while (str[i] != '\0')
	{
		i++;
	}
	z = i/2;

	while (str[z] != '\0')
	{
		_putchar(str[z]);
		z++;
	}
	_putchar('\n');
}

