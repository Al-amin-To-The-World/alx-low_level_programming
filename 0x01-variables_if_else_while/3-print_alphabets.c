#include <stdio.h>

/**
 * main - prints the alphabets in small and capital letters
 * letters are stored in ch and CH
 * Return: Always 0 (success)
 */

int main(void)

{

	char ch;
	char CH;

	for (ch = 'a'; ch <= 'z'; ch++)
	{
		putchar(ch);
	}

	for (CH = 'A'; CH <= 'Z'; CH++)
	{
		putchar(CH);
	}
	putchar('\n');
	return (0);

}
