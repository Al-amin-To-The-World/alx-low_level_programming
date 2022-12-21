#include "main.h"
/**
 * _islower - Returns 1 if c is lowercase
 * Returns 0 otherwise
 * Return: Always 0 (success)
 * @c: c is an ascii character
 */

int _islower(int c)
{
	if (c >= 'a' && c <= 'z')
		return (1);
	else
		return (0);
}
