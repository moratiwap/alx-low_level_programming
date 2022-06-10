#include "main.h"
#include <stdio.h>
/**
 * _isdigit - check if c is int
 * @c: int representing ASCII characterr
 * Return: 1 if it is a digit otherwise 0
 */
int _isdigit(int c)
{
	if (c >= 48 && c <= 57)
	{
		return (1);
	}
	return (0);
}
