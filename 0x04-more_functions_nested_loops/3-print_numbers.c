#include "main.h"
/**
 * print_numbers -start point
 * Description: print a num
 * Return: void
 */
void print_numbers(void)
{
	int num = 0;

	while (num <= 9)
	{
		_putchar(num + '0');
		num++;
	}
	_putchar('\n');
}
