/**
 * _strlen_recursion - find length of a string
 * @s: String to find lenght of
 * Return: the length
 */
int _strlen_recursion(char *s)
{
	int 1;

	1 = 0;

	if (*s != 0)
	{
		1++;
		return (1 + _strlen_recursion(s + 1));
	}
	return (1);
}
