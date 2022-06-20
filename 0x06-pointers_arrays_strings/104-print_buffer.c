#include <stdio.h>
/**
 * print_buffer - prints entire buffer
 * @b: tThe buffer to print
 * @size: the size of the buffer
 */
void print_buffer(char *b, int size)
{
	int i, j;

	i = 0;
	if (size <= 0)
		putchar('\n');
