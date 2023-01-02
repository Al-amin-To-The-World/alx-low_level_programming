#include "main.h"



/**
 * times_table - prints the 9 times table
 * Description: prints the 9 times table
 * Return: void
 */

void times_table(void)
{
	int x;
	int y;
	int z;

	x = 0;
	while (x <= 9)
	{
		y = 0;
		while (y <= 9)
		{
		z = x * y;
		if (y == 0)
		{
		_putchar('0');
		}
		else if (z <= 9)
		{
		_putchar(',');
		_putchar(' ');
		_putchar(' ');
		_putchar('0' + z);
		}
		else
		{
		_putchar(',');
		_putchar(' ');
		_putchar((z / 10) + '0');
		_putchar((z % 10) + '0');
		}
		y++;
		}
	_putchar('\n');
	x++;
	}
}
