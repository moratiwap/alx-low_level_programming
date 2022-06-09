#include <stdio.h>

#include "main.h"
/**
 * main - prints largest of 3 int
 * Return: 0
 */
int main(void)
{
	int a, b, c;
	int largest;

	a = 900;

	b = -80;

	c = 0;

	largest = largest_number(a, b, c);

	printf("%d is the largest number\n", largest);

	return (0);
}
