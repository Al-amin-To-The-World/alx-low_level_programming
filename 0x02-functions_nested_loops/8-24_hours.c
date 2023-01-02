#include "main.h"

/**
 * jack_bauer - prints every minute of the day
 * Description: prints every minute of the day
 * Return: void
 */

void jack_bauer(void)
{
	int a;
	int b;
	int c;
	int d;
	int z;

	z = 58;
	a = '0';
	while (a < '3')
	{
		if (a == '2')
		{
			z = '4';
		}
			b = '0';
			while (b < z)
			{
				c = '0';
				while (c < '6')
				{
					d = '0';
					while (d <= '9')
					{
						_putchar(a);
						_putchar(b);
						_putchar(':');
						_putchar(c);
						_putchar(d);
						_putchar('\n');
						d++;
					}
				c++;
				}
			b++;
			}
		a++;
	}
}
