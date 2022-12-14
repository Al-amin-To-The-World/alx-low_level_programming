#include <stdio.h>

/**
 * main - prints lower case alphabets in reverse
 * letters are storeed in alf
 * Return: Always 0 (success)
 */

int main(void)
{
	char alf;
	
	for (alf = 'z'; alf >= 'a'; alf--)
	{
		putchar(alf);
	}
	putchar('\n');
	return (0);
}
