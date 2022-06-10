#include "main.h"
#include <stdio.h>
/**
 * print_diagonal - function that draw diagonal line
 * @n: int input
 * Return: Always 0
 */
void print_diagonal(int n)
{
	int i;
	int spaces;

	for (i = 0; i < n; i++)
	{
		for (spaces = 0; space < i; spaces++)
		{
			_putchar(' ');
		}
		_putchar('\\');
		_putchar('\n');
	}
	if (n <= 0)
	{
		_putchar('\n');
	}
}
