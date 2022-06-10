#include <stdio.h>
/**
 * main -find largest prime
 * Return: success always
 */
int main(void)
{
	unsigned long int i = 3, n = 612852475143;

	for (; i < 120577; i += 2)
	{
		while (n % i == 0 && n != 1)
			n /= i;
	}
	printf("%lu\n", n);
	return (0);
}
