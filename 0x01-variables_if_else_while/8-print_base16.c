#include <stdio.h>

/**
 * main - prints all the character of the hexadecimal base
 * Return: Always 0 (success)
 */

int main(void)

{
	int x;
	char y;

	for (x = 0; x <= 9; x++)
	{
		putchar((x % 10) + '0');
	}
	for (y = 'a'; y <= 'f'; y++)
	{
		putchar(y);
	}
	putchar('\n');
	return (0);

}
