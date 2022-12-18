#include <stdio.h>

/**
 * main - prints all possible combinations of two two-digit numbers
 * Return: Always 0 (success)
 */

int main(void)

{

	int x;
	int y;
	int z;
	int e;

	for (x = '0'; x <= '9'; x++)
	{
		for (y = '0'; y <= '9'; y++)
		{
			for (z = x; z <= '9'; z++)
			{
				for (e = (y + 1); e <= '9'; e++)
				{
					putchar(x);
					putchar(y);
					putchar(' ');
					putchar(z);
					putchar(e);

					if (!((x == '9' && y == '8') && (z == '9' && e == '9')))
					{
						putchar(',');
						putchar(' ');
					
					}
				}
				e = '0';

			}
		}
	}
	putchar('\n');
	return (0);
}
