#include "main.h"
/**
 * char *_strcpy - a function that copies pointed to by src
 * @dest: destination string
 * @src: source of string
 * Return: string
 */
char *_strcpy(char *dest, char *src)
{
	char *guard = dest;

	while (*src)
	{
		*dest++ = *src++;
		*dest = 0;
	}
	return (guard);
}
