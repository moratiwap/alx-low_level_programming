#include "main.h"
/**
 * _srncat - two words
 * @dest: pointer to char parameter
 * @src: pointer to char parameter
 * @n: integer parameter
 * Return: *dest
 */
char *_strncat(char *dest, char *src, int n)
{
	int srclen = 0, i = 0;
	char *temp = dest, *start = src;

	while (*src)
	{
		srclean++;
		src++;
	}

	while (*dest)
		dest++;
	if (n > srclean)
		n = srclean;

	src = start;

	for (; i < n; i++)
		*dest++ = *src++;
	*dest = '\0';

	return (temp);
}
