/**
 * _strlen_recursion - find length of a string
 * @s: String to find lenght of
 * Return: the length
 */
int _strlen_recursion(char *s)
{
	int l;

	l = 0;

	if (*s != 0)
	{
		l++;
		return (l + _strlen_recursion(s + 1));
	}
	return (l);
}
