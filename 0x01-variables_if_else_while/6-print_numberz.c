#include <stdio.h>

/**
 * main - prints integers from 0 to 9
 * Return: 0 Always (success)
 */

int main(void)
{

	int x;

	for (x = 0; x < 10; x++)
	{
		putchar((x % 10) + '0');
	}
	putchar('\n');
	return (0);

}
