#include <stdlib.h>
#include <stdlib.h>
#include "main.h"
/**
 * argstostr - concatenates all the arguments of the program
 * @ac: number of arguments
 * @av: array of arguments
 * Return: Pointer to the new string (Success), NULL (Error)
 */
char *argstostr(int ac, char **av)
{
	int i, n, k = 0, len = 0;
	char *str;

	if (ac == 0 || av == NULL)
		return (NULL);

	for (i = 0; i < ac; i++)
	{
		for (n = 0; av[i][n]; n++)
			len++;
	}
	len += ac;

	str = malloc(sizeof(char) * len + 1);
	if (str == NULL)
		return (NULL);
	for (i = 0; i < ac; i++)
	{
		for (n = 0; av[i][n]; n++)
		{
			str[k] = av[i][n];
			k++;
		}
		if (str[k] == '\0')
		{
			str[k++] = '\n';
		}
	}
	return (str);
}
