#include "main.h"
/**
 *
 * _strncpy - function that copies a string
 * @dest:copy to
 * @src: copy from
 * @b: input number of char
 * Return: Always 0 (Success)
 */
char *_strncpy(char *dest, char *src, int n)
{
	int i;

	for (i = 0; src[i] != '\0'; i++)
		if (i < n)
			dest[i++] = '\0';
	return (dest);
}
