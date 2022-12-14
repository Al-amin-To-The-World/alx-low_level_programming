#include <stdio.h>
#include <stdlib.h>

/**
 * main - print the alphabets in lowercase
 * alphabets are stored in Alf
 * Return: Always 0 (success)
 */

int main(void)
{

	char Alf;

	for (Alf = 'a'; Alf <= 'z'; Alf++)
	{
		putchar(Alf);
	}
	putchar('\n');
	return (0);

}
