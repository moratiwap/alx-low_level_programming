#include "main.h"
/**
 * _isupper - a function that checkes upper case character
 * @c: input
 * Return: 1 if c is upper case, 0 otherwise
 */
int _isupper(int c)
{
	if (c >= 'A' && c <= 'Z')
		return (1);
	return (0);
}
